#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Acidente_de_trabalho.hpp"

Acidente_de_trabalho::Acidente_de_trabalho(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Acidente_de_trabalho::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Acidente_de_trabalho::getResistencia() 
{
    return this->resistencia;
}