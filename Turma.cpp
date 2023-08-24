/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Turma.cpp
 * Author: Martins
 * 
 * Created on 26 de Outubro de 2019, 09:11
 */

#include "Turma.h"

int Turma::geraCodigo = 1;

Turma::Turma() {
    this->codigo = geraCodigo++;
}

Turma::Turma(const Turma& orig){
    
    
    this->ano = orig.ano;
    this->codigo = orig.codigo;
    this->estudantes = orig.estudantes;
    this->prof = orig.prof;
 
}


Turma::Turma(Professor professor) {
    this->codigo = geraCodigo++;
    this->prof = professor;
}

Turma::Turma(Professor professor, int ano){
    this->codigo = geraCodigo++;
    this->prof = professor;
    this->ano = ano;
}

Turma::~Turma(){
    
}

void Turma::setCodigo(int codigo){
    this->codigo = codigo;
}
int Turma::getCodigo(){
    return codigo;
}

void Turma::setAno(int ano){
    this->ano = ano;
}
int Turma::getAno(){
    return ano;
}


void Turma::addEstudante(const Estudante estudante){
    estudantes.push_back(estudante);
}
//void Turma::addEstudantePorIndex(int index_estudante, const Estudante& estudante){
//    estudantes[index_estudante] = estudante;
//}

vector<Estudante> Turma::getEstudantes(){
    return this->estudantes = estudantes;
}


void Turma::setProfessor(Professor professor){
    this->prof = professor;
}
Professor& Turma::getProfessor(){
    return prof;
}

bool Turma::adicionarNotaAluno(int index_turma, int indexEstudante, float nota){
    if(indexEstudante < 0 || indexEstudante >= this->estudantes.size() || nota < 0)
        return false;
    
    return this->estudantes[indexEstudante].addNota(index_turma, nota);
}

bool Turma::alterarNotaAluno(int index_turma, int indexEstudante, int index_nota, float nota){
    if(indexEstudante < 0 || indexEstudante >= this->estudantes.size() || nota < 0)
        return false;
    
    return this->estudantes[indexEstudante-1].alterarNota(index_turma, index_nota, nota);
}

string Turma::gerarBoletim(int index_turma){
    string sb = "\n--- Boletim Geral ---\n";
    
    for(Estudante estudante : estudantes){
        sb.append(estudante.gerarBoletim(index_turma)).append("\n");        
    }
    
    return sb;
}

int Turma::listarAlunos(int index_turma){
    string sb = "\n--- Listagem dos Alunos ---\n";
    int id = 1, op, index_estudante;
    
    for(Estudante estudante : estudantes){
        sb.append(to_string(id++)).append(" - ").append(estudante.getNome()).append(" (").append(to_string(estudante.getMatricula())).append(")\n");
    }
    sb.append("\n\nSelecione um aluno para alterar seus dados: ");
    cout << sb;
    cin >> op;
    if(op < 1 || op >= id)
        op = -1;
    
    return op;
    //index_estudante = op;
}

void Turma::alterarAluno(int index_turma){
    string sb = "\n--- Listagem dos Alunos ---\n";
    int id = 1, op, index_estudante, i, j;
    
    for(Estudante estudante : estudantes){
        sb.append(to_string(id++)).append(" - ").append(estudante.getNome()).append(" (").append(to_string(estudante.getMatricula())).append(")\n");
    }
    sb.append("\n\nSelecione um aluno para alterar seus dados: ");
    cout << sb;
    cin >> op;
    index_estudante = op;
    if(op >= 1 && op <= id - 1){
        op--;
        Estudante *estudante = &(estudantes[op]);
        cout << "Alterando os dados de " << estudante->getNome() << ", matricula " << estudante->getMatricula() << "\n";
        vector<Nota>* notas = estudante->getNotas();        
        bool loop = true;
        while(loop){
            string nome, data, endereco, telefone;
            int id_nota = 1, index_nota;
            float nova_nota;
            cout << "\nSelecione o que voce deseja alterar\n";
            cout << "1 - Nome = " << estudante->getNome() << "\n";
            cout << "2 - Nome da mae = " << estudante->getNomeMae() << "\n";
            cout << "3 - Nome do pai = " << estudante->getNomePai() << "\n";
            cout << "4 - Data de nascimento = " << estudante->getDataNascimento() << "\n";
            cout << "5 - Endereco = " << estudante->getEndereco() << "\n";
            cout << "6 - Telefone = " << estudante->getTelefone() << "\n";
            cout << "7 - Notas...\n\n";
            cout << "0 - Sair\n";
            cout << "\n-> ";
            cin >> op;
            getchar();
            switch(op){
                case 1:
                    cout << "Digite o novo nome do aluno: ";                    
                    getline(cin, nome);
                    estudante->setNome(nome);
                    break;
                case 2:
                    cout << "Digite o novo nome da mae do aluno: ";
                    getline(cin, nome);
                    estudante->setNomeMae(nome);
                    break;
                case 3:
                    cout << "Digite o novo nome do pai do aluno: ";
                    getline(cin, nome);
                    estudante->setNomePai(nome);
                    break;
                case 4:
                    cout << "Digite a nova data de nascimento do aluno: ";                    
                    getline(cin, data);
                    estudante->setDataNascimento(data);
                    break;
                case 5:
                    cout << "Digite o novo endereco do aluno: ";                    
                    getline(cin, endereco);
                    estudante->setEndereco(endereco);
                    break;
                case 6:
                    cout << "Digite o novo telefone do aluno: ";                    
                    getline(cin, telefone);
                    estudante->setTelefone(telefone);
                    break;
                case 7:
                    cout << "--- Notas de " << estudante->getNome() << " (" << estudante->getMatricula() << ")\n";
                    i = 1;
                    id_nota = 1;
                    for(Nota nota : *notas){
                        if(nota.getIndexTurma() == index_turma)
                            cout << id_nota++ << " - Codigo da turma: " << nota.getIndexTurma()+1 << " - " << "Nota: " << nota.getNota() << "\n";
                        i++;
                    }                         
                    cout << "\nInforme o id do registro a ser alterado: ";
                    cin >> index_nota;
                    if(index_nota < 1 || index_nota >= id_nota){
                        cout << "Nota invalida!\n";
                    } else{
                        i = 1;
                        id_nota = 1;
                        for(Nota nota : *notas){
                            if(nota.getIndexTurma() == index_turma)
                                 id_nota++;
                            i++;
                            if(id_nota == index_nota){
                                index_nota = i;
                                break;
                            }
                        } 
                        cout << "Informe a nova nota: ";
                        cin >> nova_nota;
                        if(alterarNotaAluno((*notas)[index_nota-1].getIndexTurma(), index_estudante, index_nota - 1, nova_nota)){
                            cout << "Nota alterada com sucesso!\n";
                        } else{
                            cout << "Nao foi possivel alterar a nota...\n";
                        }                    
                    }
                    break;
                case 0:
                    loop = false;
                    break;
            }
        }
    } else{
        cout << "Aluno invalido!\n";
    }
}

string Turma::toString(){
    string sb = "";
    sb.append("Codigo: ").append(to_string(this->codigo))
            .append(" - ").append("Ano: ").append(to_string(this->ano))
            .append(" - ").append("Professor: ").append(this->prof.getNome());
    return sb;
}