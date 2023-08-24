/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estudante.h
 * Author: Martins
 *
 * Created on 26 de Outubro de 2019, 09:08
 */


#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include "Nota.h"

class Estudante {
  


public:    
    Estudante();
    Estudante(string nome, string nomeMae, string nomePai, string dataNasc, string endereco, string telefone); 
    Estudante(const Estudante& orig);
    virtual ~Estudante();
    
   
    
    void setNome(string nome);
    string getNome();
    
    void setNomeMae(string nomeMae);
    string getNomeMae();
   
    void setNomePai(string nomePai);
    string getNomePai();
    
    void setDataNascimento(string dataNasc);
    string getDataNascimento();
    
    void setEndereco(string endereco);
    string getEndereco();
    
    void setTelefone(string telefone);
    string getTelefone();
    
    int getMatricula();
    
    vector<Nota>* getNotas();
    
    bool addNota(int index_turma, float nota);
    bool alterarNota(int index_turma, int index_nota, float nota);
    
    string gerarBoletim(int index_turma);
    
    string toString();
    
private:
    string nome;
    string nomeMae;
    string nomePai;
    string dataNasc;
    string endereco;
    string telefone;
    static int geraMatricula;
    int matricula;
    vector<Nota> notas;

};

#endif /* ESTUDANTE_H */

