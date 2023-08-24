/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nota.h
 * Author: Martins
 *
 * Created on 26 de Outubro de 2019, 18:17
 */

#ifndef NOTA_H
#define NOTA_H

#include <vector>
#include <iostream>
#include <utility>
#include <cstdlib>
//#include "Turma.h"

using namespace std;


class Nota {
public:
    Nota();
    Nota(int index_turma, float nota);
//    Nota(Turma& turma, float nota);
    Nota(const Nota& orig);
    virtual ~Nota();
    
    int getIndexTurma();
    float getNota();
    
    
private:
    int index_turma;
//    Turma& turma;
    float nota;
   

};

#endif /* NOTA_H */

