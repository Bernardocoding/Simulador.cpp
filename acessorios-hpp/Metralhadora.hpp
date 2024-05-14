#ifndef METRALHADORA
#define METRALHADORA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Metralhadora : public ArmaAtaque
{
    public:
        Metralhadora(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif