#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Faca.hpp"

Faca::Faca(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Faca::gerarForcaAtaque()
{
    return maxForca;
}

string Faca::gerarRuidoAtaque()
{
    return "shack shack";
}
