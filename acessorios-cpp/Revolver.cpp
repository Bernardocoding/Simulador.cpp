#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Revolver.hpp"

Revolver::Revolver(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Revolver::gerarForcaAtaque()
{
    return minForca*6;
}

string Revolver::gerarRuidoAtaque()
{
    return "bang bang bang";
}