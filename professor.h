#pragma once

#include <string>
#include "pessoa.h"

class Professor : public Pessoa{
    private:
        std::string disciplina;
    public:
        Professor(std::string nome, std::string cpf, std::string nomeusuario, std::string disciplina);

        std::string getDisciplina(); 
};