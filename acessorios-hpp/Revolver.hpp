#ifndef REVOLVER
#define REVOLVER

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Revolver : public ArmaAtaque
{
    public:
        Revolver(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif