#include "aluno.h"
#include <string>

Aluno::Aluno(std::string nome, std::string cpf, std::string nomeusuario, std::string re) : Pessoa(nome, cpf, nomeusuario){
    this -> re = re;
}

    std::string Aluno::getRe(){return re;}