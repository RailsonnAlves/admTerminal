#pragma once

#include "pessoa.h"
#include <string>

class Aluno : public Pessoa{
    private:
        std::string re;
    public:
        Aluno(std::string nome, std::string cpf, std::string nomeusuario, std::string re);

        std::string getRe();

};