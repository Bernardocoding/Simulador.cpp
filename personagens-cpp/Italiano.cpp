#include "..\personagens-hpp\Italiano.hpp"

Italiano::Italiano(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Italiano::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Italiano::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Italiano::pegarDescricao() 
{
    return "Porco Dio! Ma come sei fragile!";
}