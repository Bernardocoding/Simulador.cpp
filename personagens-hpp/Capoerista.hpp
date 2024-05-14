#ifndef CAPOERISTA
#define CAPOERISTA
#include "../core-simulador-hpp/Personagem.hpp"

class Capoerista: public Personagem
{
    public:
        Capoerista(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};




#endif