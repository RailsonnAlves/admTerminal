#include "pessoa.h"
#include "string"

Pessoa::Pessoa(std::string nome, std::string cpf, std::string nomeusuario){
    this -> nome = nome;
    this -> cpf= cpf;
    this -> nomeusuario= nomeusuario;
}

    
    std::string Pessoa::getNome(){return nome;}
    std::string Pessoa::getCpf(){return cpf;}

    void Pessoa::setNome(std::string nome){this -> nome = nome;}
    void Pessoa::setCpf(std::string cpf){this -> cpf = cpf;}    
