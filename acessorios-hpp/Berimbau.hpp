#ifndef BERIMBAU
#define BERIMBAU

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Berimbau : public ArmaAtaque
{
    public:
        Berimbau(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif