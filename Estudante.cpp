/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Estudante.cpp
 * Author: Martins
 * 
 * Created on 26 de Outubro de 2019, 09:08
 */

#include "Estudante.h"

    int Estudante::geraMatricula = 1;
  
    Estudante::Estudante(){
        this->matricula = geraMatricula++;
    }
    
    

    Estudante::Estudante(const Estudante& orig){
        this->nome = orig.nome;
        this->nomeMae = orig.nomeMae;
        this->nomePai = orig.nomePai;
        this->dataNasc = orig.dataNasc;
        this->endereco = orig.endereco;
        this->telefone = orig.telefone;
        this->matricula = orig.matricula;
        this->notas = orig.notas;
    }
    Estudante::~Estudante(){
        
    }
    
    
    
    
    
    
    Estudante::Estudante(string nome, string nomeMae, string nomePai, string dataNasc, string endereco, string telefone){
        this->nome = nome;
        this->nomeMae = nomeMae;
        this->nomePai = nomePai;
        this->dataNasc = dataNasc;
        this->endereco = endereco;
        this->telefone = telefone;
        this->matricula = geraMatricula++;
    }
    
    //////////////////////////////////
    void Estudante::setNome(string nome){
        this->nome = nome;
    }
    string Estudante::getNome(){
        return nome;
    }
    //////////////////////////////////
    void Estudante::setNomeMae(string nomeMae){
        this->nomeMae = nomeMae;
    }
    string Estudante::getNomeMae(){
        return nomeMae;
    }
   //////////////////////////////////
    void Estudante::setNomePai(string nomePai){
        this->nomePai = nomePai;
    }
    string Estudante::getNomePai(){
        return nomePai;
    }
    //////////////////////////////////
    void Estudante::setDataNascimento(string dataNasc){
        this->dataNasc = dataNasc;
    }
    string Estudante::getDataNascimento(){
        return dataNasc;
    }
    //////////////////////////////////
    void Estudante::setEndereco(string endereco){
        this->endereco = endereco;
    }
    string Estudante::getEndereco(){
        return endereco;
    }
    //////////////////////////////////
    void Estudante::setTelefone(string telefone){
        this->telefone = telefone;
    }
    string Estudante::getTelefone(){
        return telefone;
    }
    //////////////////////////////////
    int Estudante::getMatricula(){
        return matricula;
    }
    
    
    bool Estudante::addNota(int index_turma, float nota){
        if(index_turma < 0)
            return false;
        
        Nota nota_estrutura = Nota(index_turma, nota);
        
        this->notas.push_back(nota_estrutura);
        return true;
    }
    
    bool Estudante::alterarNota(int index_turma, int index_nota, float nota){
        if(index_turma < 0 || index_nota < 0 || index_nota >= this->notas.size())
            return false;
        
        Nota nota_estrutura = Nota(index_turma, nota);
        
        this->notas[index_nota] = nota_estrutura;
        return true;
    }
    
    string Estudante::gerarBoletim(int index_turma){
        string sb = "";
        float media = 0;
        int qtd_notas = 0;
        
        sb.append("Nome: ").append(this->nome);
        sb.append("\nMatricula: ").append(to_string(this->matricula));
        for(Nota nota : notas){
            if(nota.getIndexTurma() == index_turma){
                media += nota.getNota();
                qtd_notas++;
            }
        }
        if(qtd_notas != 0)
            media = (float) media / qtd_notas;
        else
            media = 0;
        sb.append("\nMedia: ").append(to_string(media));
        sb.append("\nSituacao: ").append((media < 60 ? "Reprovado" : "Aprovado")).append("\n");
        
        return sb;
    }

    vector<Nota>* Estudante::getNotas(){
        return &notas;
    }

    string Estudante::toString(){
        string sb = "";
        sb.append("Matricula: ").append(to_string(this->matricula)).append(" - ").append("Nome: ").append(this->nome);
        
        return sb;
    }