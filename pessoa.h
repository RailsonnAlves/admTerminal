#pragma once

#include <iostream>


class Pessoa{

    protected:
        std::string nome;
        std::string cpf;
        std::string nomeusuario;

    public:
        Pessoa(std::string nome, std::string cpf);
        std::string Pessoa::getNome(){};
        std::string Pessoa::getCpf(){};

        void Pessoa::setNome(){};
        void Pessoa::setCpf();

};