#ifndef COLETE_KEVLAR
#define COLETE_KEVLAR

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Colete_kevlar : public ArmaDefesa
{
    public:
        Colete_kevlar(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif