#include "..\personagens-hpp\Bebado.hpp"

Bebado::Bebado(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Bebado::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Bebado::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Bebado::pegarDescricao() 
{
    return "To bebdo não.. Ce que ta!";
}