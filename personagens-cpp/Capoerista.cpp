#include "..\personagens-hpp\Capoerista.hpp"

Capoerista::Capoerista(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Capoerista::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Capoerista::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Capoerista::pegarDescricao() 
{
    return "Tome rabo de arraia boy";
}