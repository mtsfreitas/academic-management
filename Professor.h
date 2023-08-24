/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Professor.h
 * Author: Martins
 *
 * Created on 26 de Outubro de 2019, 09:10
 */

using namespace std;


#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <utility>
#include <cstdlib>
#include <vector>

typedef enum area {Exatas, Humanas, Biologicas} Area;


class Professor {

public:
    Professor();
    Professor(string nome, string endereco, Area area, float salarioHora);
    Professor(const Professor& orig);
    virtual ~Professor();
  
    
    void setNome(string nome);
    string getNome();
    
    void setEndereco(string endereco);
    string getEndereco();
    
    void setArea(Area area);
    string getArea();
    
    void setSalarioHora(float salarioHora);
    float getSalarioHora();
    
    string toString();
    
//     void Professor::listarAlunos();
 
private: 
    string nome;
    string endereco;
    Area area;
    float salarioHora;
        
    
};

#endif /* PROFESSOR_H */

