#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Berimbau.hpp"

Berimbau::Berimbau(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Berimbau::gerarForcaAtaque()
{
    return maxForca+minForca/1.5;
}

string Berimbau::gerarRuidoAtaque()
{
    return "tick tin don don, tick tin don don..";
}
