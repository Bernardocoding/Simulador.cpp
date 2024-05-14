#ifndef ACIDENTE_DE_TRABALHO
#define ACIDENTE_DE_TRABALHO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Acidente_de_trabalho : public ArmaDefesa
{
    public:
        Acidente_de_trabalho(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif