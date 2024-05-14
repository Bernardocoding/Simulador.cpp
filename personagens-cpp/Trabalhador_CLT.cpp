#include "../personagens-hpp/Trabalhador_CLT.hpp"

Trabalhador_CLT::Trabalhador_CLT(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Trabalhador_CLT::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Trabalhador_CLT::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Trabalhador_CLT::pegarDescricao() 
{
    return "Assine minha carteira patrão";
}