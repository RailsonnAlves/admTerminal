#pragma once

#include <string>


class Pessoa{

    protected:
        std::string nome;
        std::string cpf;
        std::string nomeusuario;

    public:
        Pessoa(std::string nome, std::string cpf, std::string nomeusuario);

        std::string getNome();
        std::string getCpf();

        void setNome(std::string);
        void setCpf(std::string);

};