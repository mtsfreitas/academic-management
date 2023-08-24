/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Martins
 *
 * Created on 26 de Outubro de 2019, 17:50
 */

#include "Turma.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    vector<Turma> turmas;
    vector<Professor> professores;
    vector<Estudante> estudantes;
    
    Turma turma1;
    turma1.setAno(2010);
    turma1.setCodigo(1);
    Professor professor1 ("Nirosmar", "R. Amazonas", Exatas, 200);
    turma1.setProfessor(professor1);

    Turma turma2;
    turma2.setAno(2010);
    turma2.setCodigo(2);
    Professor professor2 ("Francisco", "R. Bahia", Humanas, 150);
    turma2.setProfessor(professor2);

    Estudante estudante1 ("Antenor Albuquerque", "Paula", "Thomas", "10/10/2010", "R. Macaxeira", "3136421265");
    Estudante estudante2 ("Pafuncio Figueiredo", "Katia", "Silvio", "12/10/2011", "R. Bonina", "3132421461");
    turma1.addEstudante(estudante1);
    turma1.addEstudante(estudante2);
    
    turma1.adicionarNotaAluno(0, 0, 100);
    turma1.adicionarNotaAluno(0, 0, 50);
    turma1.adicionarNotaAluno(0, 1, 80);
    turma1.adicionarNotaAluno(0, 1, 75);
    
    turmas.push_back(turma1);
    turmas.push_back(turma2);
    professores.push_back(professor1);
    professores.push_back(professor2);
    estudantes.push_back(estudante1);
    estudantes.push_back(estudante2);
    
//    turma1.listarAlunos(0);
     
      int opcao=0, opcaoloop = 1, op, i, j, op2;
      string nome, nomemae, nomepai, datanasc, endereco, telefone;
      int area_op, ano;
      Area area;
      float salariohora, nota;
      
      do{
          do{
            do{
              cout << "\n\nG E S T A O   A C A D E M I C A\n";
              cout << "\n\n[1] > Estudante\n";
              cout << "[2] > Professor\n";
              cout << "[3] > Turma\n";
              cout << "[0] > Sair\n";
              cout << "\n> Opcao: " ;
              cin >> opcao;
              getchar();
              if(opcao == 0)
              {
                  cout << "\n\nObrigado por utilizar nosso software! Gestao Academica - Matheus Freitas Martins - 3031\n\n";
                  return 0;
              }
              if(opcao != 1 && opcao != 2 && opcao != 3)
              {
                  cout << "\n >>> [ERRO] Opcao invalida! Digite novamente\n\n";
              }
              else
                  break;
            }while(opcao != 1 && opcao != 2 && opcao != 3);


                  switch(opcao){
                      case 1:  
                                do{
                                    cout << "\n[1] Cadastramento de estudante\n"; 
                                    cout << "[2] Listagem e alteracao de estudante\n"; 
                                    cout << "[0] Voltar\n";
                                    cout << "\n> Opcao: " ;
                                    cin >> opcao;
                                    getchar();
                                    if(opcao == 0)
                                    {
                                        break;
                                    }
                                    if(opcao ==1 || opcao ==2)
                                    {
                                        if(opcao == 1)
                                        {
                                            cout << "\nNome do aluno: ";
                                            getline(cin, nome);                                            
                                            cout << "Nome da mae: ";
                                            getline(cin, nomemae);
                                            cout << "Nome do pai: ";
                                            getline(cin, nomepai);
                                            cout << "Data de nascimento: ";
                                            getline(cin, datanasc);
                                            cout << "Endereco: ";
                                            getline(cin, endereco);
                                            cout << "Telefone: ";
                                            getline(cin, telefone);
                                            // VERIFICAR TURMAS EXISTENTES
                                            // COLOCAR ALUNO EM UMA TURMA SELECIONADA
                                            cout << "Escolha uma turma para o aluno (0 para escolher depois):\n";
                                            i = 1;
                                            for(Turma turma : turmas){
                                                cout << i++ << " - " << turma.toString() << "\n";
                                            }
                                            cout << "\n-> ";
                                            cin >> op;
                                            getchar();
                                            if(op < 1 || op >= i){
                                                if(op != 0)
                                                    cout << "Turma invalida!\n";
                                            } else{
                                                op--;
                                                Estudante e (nome, nomemae, nomepai, datanasc, endereco, telefone);
                                                turmas[op].addEstudante(e);
                                                estudantes.push_back(e);
                                            }
                                        }
                                        else
                                        {
                                            cout << "Escolha uma turma:\n";
                                            i = 1;
                                            for(Turma turma : turmas){
                                                cout << i++ << " - " << turma.toString() << "\n";
                                            }
                                            cout << "\n-> ";
                                            cin >> op;
                                            getchar();
                                            if(op < 1 || op >= i){
                                                cout << "Turma invalida!\n";
                                            } else{
                                                op--;                   
                                                turmas[op].alterarAluno(op);
                                            }                     
                                        }
                                         break;

                                    }
                                    else
                                         cout << "\n >>> [ERRO] Opcao invalida! Digite novamente\n\n";
                               }while(opcao !=1 || opcao !=2); break;




                      case 2:  
                               do{
                                    cout << "\n[1] Cadastramento de professor\n";          
                                    cout << "[2] Lancar notas\n";                  
                                    cout << "[3] Listagem e alteracao de professor\n"; 
                                    cout << "[0] Voltar\n";
                                    cout << "\n> Opcao: " ;
                                    cin >> opcao;
                                    getchar();
                                    if(opcao == 0)
                                    {
                                        break;
                                    }
                                    if(opcao ==1 || opcao ==2 || opcao == 3)
                                    {
                                        if(opcao == 1){
                                            
                                            
                                            cout << "\nNome do Professor: ";
                                            getline(cin, nome);                                            
                                            cout << "Endereco: ";
                                            getline(cin, endereco);
                                            cout << "Area (1 - Exatas, 2 - Humanas, 3 - Biologicas): ";
                                            cin >> area_op; 
                                            getchar();
                                            switch(area_op){
                                                case 1: area = Exatas; break;
                                                case 2: area = Humanas; break;
                                                case 3: default: area = Biologicas; break;
                                            }
                                            cout << "Salario por hora: ";
                                            cin >> salariohora;
                                            getchar();                    
                                            
                                            professores.push_back(Professor(nome, endereco, area, salariohora));


                                        }else if(opcao ==2){
                                            cout << "Escolha um professor:\n";
                                            i = 1;
                                            for(Professor professor : professores){
                                                cout << i++ << " - " << professor.getNome() << "\n";
                                            }
                                            cout << "\n-> ";
                                            cin >> op;
                                            getchar();
                                            if(op < 1 || op >= i){
                                                cout << "Professor invalido!\n";
                                            } else{
                                                op--;
                                                nome = professores[op].getNome();
                                                cout << "Escolha uma turma:\n";
                                                i = 1;
                                                j = 1;
                                                for(Turma turma : turmas){
                                                    if(turma.getProfessor().getNome().compare(nome) == 0)
                                                        cout << j++ << " - " << turma.toString() << "\n";
                                                    i++;
                                                }
                                                cout << "\n-> ";
                                                cin >> op;
                                                getchar();
                                                if(op < 1 || op >= j){
                                                    cout << "Turma invalida!\n";
                                                } else{
                                                    i = 1;
                                                    j = 1;
                                                    for(Turma turma : turmas){
                                                        if(turma.getProfessor().getNome().compare(nome) == 0)
                                                            j++;
                                                        i++;
                                                        if(j == op){
                                                            op = i;
                                                            break;
                                                        }
                                                    }
                                                    op--;
                                                    int index_e = turmas[op].listarAlunos(op);
                                                    if(index_e < 0){
                                                        cout << "Estudante invalido!\n";
                                                    } else{
                                                        cout << "Informe a nota: ";
                                                        cin >> nota;
                                                        getchar();
                                                        turmas[op].adicionarNotaAluno(op, index_e-1, nota);
//                                                      turmas[op].alterarAluno(op);
//                                                      turmas[op].listarAlunos(op);
                                                    }
                                                    
                                                }       
                                            }

                                        }else
                                        {
                                            cout << "Escolha um professor:\n";
                                            i = 1;
                                            for(Professor professor : professores){
                                                cout << i++ << " - " << professor.toString() << "\n";
                                            }
                                            cout << "\n-> ";
                                            cin >> op;
                                            getchar();
                                            if(op < 1 || op >= i){
                                                cout << "Professor invalido!\n";
                                            } else{
                                                op--;
                                                Professor* prof = &(professores[op]);
                                                i = 1;
                                                while(i != 0){
                                                    cout << "\nSelecione um campo para alterar:";
                                                    cout << "\n1 - Nome = " << prof->getNome();
                                                    cout << "\n2 - Area = " << prof->getArea();
                                                    cout << "\n3 - Salario por hora = " << prof->getSalarioHora();
                                                    cout << "\n4 - Endereco = " << prof->getEndereco();
                                                    cout << "\n0 - Sair\n";
                                                    cout << "\n-> ";
                                                    cin >> i;
                                                    getchar();
                                                    switch(i){
                                                        case 1:
                                                            cout << "Entre com o novo nome: ";
                                                            getline(cin, nome);
                                                            prof->setNome(nome);
                                                            break;
                                                        case 2:
                                                            cout << "Entre com a nova area (1 - Exatas, 2 - Humanas, 3 - Biologicas): ";
                                                            cin >> area_op;   
                                                            getchar();
                                                            switch(area_op){
                                                                case 1: area = Exatas; break;
                                                                case 2: area = Humanas; break;
                                                                case 3: default: area = Biologicas; break;
                                                            }
                                                            prof->setArea(area);
                                                            break;
                                                        case 3:
                                                            cout << "Entre com o novo salario por hora: ";
                                                            cin >> salariohora;
                                                            getchar();
                                                            prof->setSalarioHora(salariohora);
                                                            break;
                                                        case 4:
                                                            cout << "Entre com o novo endereco: ";
                                                            getline(cin, endereco);
                                                            prof->setEndereco(endereco);
                                                            break;
                                                    }
                                                }
                                            }
                                        }                           

                                        break;
                                    }
                                    else
                                         cout << "\n >>> [ERRO] Opcao invalida! Digite novamente\n\n";
                               }while(opcao !=1 || opcao !=2 || opcao !=3); break;



                      case 3:  

                                do{
                                    cout << "\n[1] Cadastramento de turmas\n";           
                                    cout << "[2] Gerar Boletim\n";
                                    cout << "[3] Adicionar estudante a alguma turma\n";
                                    cout << "[0] Voltar\n";
                                    cout << "\n> Opcao: " ;                                    
                                    cin >> opcao;
                                    
                                    if(opcao == 0)
                                    {
                                        break;
                                    }
                                    if(opcao ==1 || opcao ==2 || opcao==3)
                                    {
                                        if(opcao == 1){

                                            cout << "Escolha um professor:\n";
                                            i = 1;
                                            for(Professor professor : professores){
                                                cout << i++ << " - " << professor.toString() << "\n";
                                            }
                                            cout << "\n-> ";
                                            cin >> op;
                                            getchar();
                                            if(op < 1 || op >= i){
                                                cout << "Professor invalido!\n";
                                            } else{
                                                op--;
                                                Professor* prof = &(professores[op]);
                                                i = 1;
                                                
                                                cout << "Informe o ano da turma: ";
                                                cin >> ano;
                                                getchar();
                                                
                                                Turma t (*prof, ano);
                                                turmas.push_back(t);
                                                
                                                cout << "-> Para adicionar alunos a esta turma, utilize o menu para adicionar um a um.\n";
                                            }


                                        }else if(opcao == 2) {
                                            cout << "Escolha uma turma:\n";
                                            i = 1;
                                            for(Turma turma : turmas){
                                                cout << i++ << " - " << turma.toString() << "\n";
                                            }
                                            cout << "\n-> ";
                                            cin >> op;
                                            getchar();
                                            if(op < 1 || op >= i){
                                                cout << "Turma invalida!\n";
                                            } else{
                                                op--;
                                                cout << turmas[op].gerarBoletim(op);
                                            }        


                                        } else{
                                            cout << "Escolha uma turma:\n";
                                            i = 1;
                                            for(Turma turma : turmas){
                                                cout << i++ << " - " << turma.toString() << "\n";
                                            }
                                            cout << "\n-> ";
                                            cin >> op;
                                            getchar();
                                            if(op < 1 || op >= i){
                                                cout << "Turma invalida!\n";
                                            } else{
                                                op--;
                                                
                                                cout << "Selecione um estudante:\n";
                                                i = 1;
                                                for(Estudante e : estudantes){
                                                    cout << i++ << " - " <<  e.toString() << "\n";
                                                }
                                                cout << "\n-> ";
                                                cin >> op2;
                                                if(op2 < 1 || op2 >= i){
                                                    cout << "Estudante invalido!\n";
                                                } else{
                                                    op2--;
                                                    turmas[op].addEstudante(estudantes[op2]);
                                                }
                                            }
                                        }                         

                                        break;
                                    }
                                    else
                                         cout << "\n >>> [ERRO] Opcao invalida! Digite novamente\n\n";
                               }while(opcao !=1 || opcao !=2); break;

                      default:   cout << "\n >>> [ERRO] Opcao invalida! Digite novamente\n\n";

            }
      }while(opcao == 0);       
       
                  cout << "\n\nDeseja continuar usando o software? [1] SIM | [2] NAO\n";
                  cout << "\n> Opcao: ";
                  cin >> opcaoloop;
                  getchar();
                  if(opcaoloop == 2){ 
                      cout << "\n\n\nObrigado por utilizar nosso software! Gestao Academica - Matheus Freitas Martins - 3031\n\n";
                      break;
                  }                
                      
    }while(opcaoloop == 1);


   
      
  
   
     
     
      



      
     
    

  
      
  
      








    
    
    
    
    return 0;
}

