#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Metralhadora.hpp"

Metralhadora::Metralhadora(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Metralhadora::gerarForcaAtaque()
{
    return minForca*30;
}

string Metralhadora::gerarRuidoAtaque()
{
    return "taratatatatatatatatatatatat";
}