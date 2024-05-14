#ifndef BEBADO
#define BEBADO
#include "../core-simulador-hpp/Personagem.hpp"
class Bebado : public Personagem 
{
    public:
        Bebado(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif