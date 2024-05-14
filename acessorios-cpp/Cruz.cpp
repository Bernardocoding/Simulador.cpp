#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Cruz.hpp"

Cruz::Cruz(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Cruz::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Cruz::getResistencia() 
{
    return this->resistencia;
}