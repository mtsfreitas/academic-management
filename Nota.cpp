/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nota.cpp
 * Author: Martins
 * 
 * Created on 26 de Outubro de 2019, 18:17
 */

#include "Nota.h"

Nota::Nota() {
}

Nota::Nota(int index_turma, float nota) {
    this->index_turma = index_turma;
    this->nota = nota;
}

//Nota::Nota(Turma& turma, float nota) {
//    this->turma = turma;
//    this->nota = nota;
//}

Nota::Nota(const Nota& orig) {
    this->index_turma = orig.index_turma;
    this->nota = orig.nota;
}

Nota::~Nota() {
}

int Nota::getIndexTurma(){
    return index_turma;
}

float Nota::getNota(){
    return nota;
}
