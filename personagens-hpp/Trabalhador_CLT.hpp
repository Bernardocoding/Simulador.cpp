#ifndef TRABALHADOR_CLT
#define TRABALHADOR_CLT
#include "../core-simulador-hpp/Personagem.hpp" 

class Trabalhador_CLT : public Personagem 
{
    public:
        Trabalhador_CLT(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif