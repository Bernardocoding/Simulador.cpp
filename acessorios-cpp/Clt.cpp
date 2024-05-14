#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Clt.hpp"

Clt::Clt(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Clt::gerarForcaAtaque()
{
    return maxForca*1.3;
}

string Clt::gerarRuidoAtaque()
{
    return "Pague meus direitos sem choro";
}