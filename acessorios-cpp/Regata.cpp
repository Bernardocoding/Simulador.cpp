#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Regata.hpp"

Regata::Regata(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Regata::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Regata::getResistencia() 
{
    return this->resistencia;
}