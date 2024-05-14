#ifndef CHAVES
#define CHAVES
#include "../core-simulador-hpp/Personagem.hpp" 
// Quando uma classe herda de outra usando a palavra-chave public,
// os membros públicos da classe base também se tornam membros públicos
// da classe derivada. Isso significa que os membros públicos da classe Personagem
// podem ser acessados diretamente pela classe Bebado e por qualquer código que utilize 
// objetos da classe Bebado.
class Chaves : public Personagem 
{
    public:
        Chaves(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif