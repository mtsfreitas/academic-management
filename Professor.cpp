/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Professor.cpp
 * Author: Martins
 * 
 * Created on 26 de Outubro de 2019, 09:10
 */

#include "Professor.h"

    Professor::Professor(){
       
    }
    
    Professor::Professor(const Professor& orig){
        this->area = orig.area;
        this->endereco = orig.endereco;
        this->nome = orig.nome;
        this->salarioHora = orig.salarioHora;
    }
    Professor::~Professor(){
        
    }
    
     
    Professor::Professor(string nome, string endereco, Area area, float salarioHora){
        this->nome = nome;
        this->endereco = endereco;
        this->area = area;
        this->salarioHora = salarioHora;
    }
    /////////////////////////////
    void Professor::setNome(string nome){
        this->nome = nome;
        
    }
    string Professor::getNome(){
        return nome;
    }
    /////////////////////////////
    void Professor::setEndereco(string endereco){
        this->endereco = endereco;
    }
    string Professor::getEndereco(){
        return endereco;
    }
    /////////////////////////////
    void Professor::setArea(Area area){
        this->area = area;
    }
    string Professor::getArea(){
        switch(this->area){
            case Exatas: return "Exatas";
            case Humanas: return "Humanas";
            case Biologicas: default: return "Biologicas";
        }
    }
    /////////////////////////////
    void Professor::setSalarioHora(float salarioHora){
        this->salarioHora = salarioHora;
    }
    float Professor::getSalarioHora(){
        return salarioHora;
    }
    
    string Professor::toString(){
        string sb = "";
        string area;
        
        switch(this->area){
            case Exatas:
                area = "Exatas";
                break;
            case Humanas:
                area = "Humanas";
                break;
            case Biologicas: default:
                area = "Biologicas";
                break;
        }
        sb.append("Nome: ").append(this->nome).append(" - ").append("Area: ").append(area);
        
        return sb;
    }
//    
//    void Professor::listarAlunos(){
//    
//    }