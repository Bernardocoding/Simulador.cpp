#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Colete_kevlar.hpp"

Colete_kevlar::Colete_kevlar(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Colete_kevlar::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Colete_kevlar::getResistencia() 
{
    return this->resistencia;
}