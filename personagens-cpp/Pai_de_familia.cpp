#include "../personagens-hpp/Pai_de_familia.hpp"

Pai_de_familia::Pai_de_familia(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Pai_de_familia::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Pai_de_familia::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Pai_de_familia::pegarDescricao() 
{
    return "Sem tempo a perder irmão...";
}