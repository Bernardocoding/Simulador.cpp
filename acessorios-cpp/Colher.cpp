#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Colher.hpp"

Colher::Colher(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Colher::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Colher::gerarRuidoAtaque()
{
    return "cush cush";
}
