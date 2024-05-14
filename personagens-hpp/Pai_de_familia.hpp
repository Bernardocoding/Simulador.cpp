#ifndef PAI_DE_FAMILIA
#define PAI_DE_FAMILIA
#include "../core-simulador-hpp/Personagem.hpp"

class Pai_de_familia: public Personagem
{
    public:
        Pai_de_familia(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;
};




#endif