/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Turma.h
 * Author: Martins
 *
 * Created on 26 de Outubro de 2019, 09:11
 */

#ifndef TURMA_H
#define TURMA_H

#include "Professor.h"
#include "Estudante.h"

class Turma {

    
private:
    Professor prof;
    vector<Estudante> estudantes; //estudantes.pushback
    int codigo;
    int ano;
    
    static int geraCodigo;
    
    
public:
    Turma();
    Turma(Professor professor);
    Turma(Professor professor, int ano);
    Turma(const Turma& orig);
    virtual ~Turma();
    
    void setCodigo(int codigo);
    int getCodigo();
    
    void setAno(int ano);
    int getAno();
    
    vector<Estudante> getEstudantes();
    void addEstudante(const Estudante estudante);
//    void addEstudantePorIndex(int index_estudante, const Estudante& estudante);
    
    void setProfessor(Professor professor);
    Professor& getProfessor();

    bool adicionarNotaAluno(int index_turma, int indexEstudante, float nota);
    bool alterarNotaAluno(int index_turma, int indexEstudante, int index_nota, float nota);
    
    string gerarBoletim(int index_turma);
    
    int listarAlunos(int index_turma);
    void alterarAluno(int index_turma);
    
    string toString();
};

#endif /* TURMA_H */

