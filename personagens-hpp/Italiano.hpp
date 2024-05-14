#ifndef ITALIANO
#define ITALIANO
#include "../core-simulador-hpp/Personagem.hpp"

class Italiano: public Personagem
{
    public:
        Italiano(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};




#endif