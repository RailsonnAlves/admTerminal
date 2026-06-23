#include <string>
#include "professor.h"

Professor::Professor(std::string nome, std::string cpf, std::string nomeusuario, 
        std::string disciplina) : Pessoa(nome, cpf, nomeusuario){
        this -> disciplina = disciplina;
}
    std::string Professor::getDisciplina(){return disciplina;}