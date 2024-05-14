#include <iostream>
#include <string>
/*importando armas*/
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Berimbau.hpp"
#include "../acessorios-hpp/Clt.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Faca.hpp"
#include "../acessorios-hpp/Metralhadora.hpp"
#include "../acessorios-hpp/Revolver.hpp"
/*importando escudo*/
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Acidente_de_trabalho.hpp"
#include "../acessorios-hpp/Regata.hpp"
#include "../acessorios-hpp/Colete_kevlar.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Cruz.hpp"
/*importando personagens*/
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Bebado.hpp"
#include "../personagens-hpp/Capoerista.hpp"
#include "../personagens-hpp/Italiano.hpp"
#include "../personagens-hpp/Pai_de_familia.hpp"
#include "../personagens-hpp/Trabalhador_CLT.hpp"

#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",2,10);
    ArmaAtaque* arma2 = new Berimbau("Arma desfarçada de instrumento",10,50);
    ArmaAtaque* arma3 = new Clt("Carteira de trabalho",13,60);
    ArmaAtaque* arma4 = new Colher("Colher de Pata",0,30);
    ArmaAtaque* arma5 = new Faca("Faca de mantega",0,10);
    ArmaAtaque* arma6 = new Metralhadora("Arma automática",10,50);
    ArmaAtaque* arma7 = new Revolver("Arma semi-automática",50,70);
    
    ArmaDefesa* escudo = new Escudo("Latão", 5);
    ArmaDefesa* escudo2 = new Armadura("Medieval", 20);
    ArmaDefesa* escudo3 = new Acidente_de_trabalho("Acidente forjado", 10);
    ArmaDefesa* escudo4 = new Regata("Camisa de verão", 13);
    ArmaDefesa* escudo5 = new Colete_kevlar("Colete a prova de balas", 10);
    ArmaDefesa* escudo6 = new Cruz("Cruz de Cristo", 69);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem* p3 = new Bebado(2, "Bebado Eq1 ", 100, arma2, escudo3);
    Personagem* p2 = new Capoerista(3, "Capoerista Eq2", 100, arma4, escudo4);
    Personagem* p4 = new Pai_de_familia(4, "Pai_de_familia Eq2 ", 100, arma7, escudo2);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}