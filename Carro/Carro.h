#ifndef CARRO_H
#define CARRO_H

using namespace std;

class Carro: public Motor, public Direcao
{

public:
	Direcao direcao;
	Motor motor;
	Carro(Direcao direcao, Motor motor);
	double calcular_velocidade();
	string calcular_direcao();
	void acelerar_carro();
	void frear_carro();
	void girar_direita_carro();
	void girar_esquerda_carro();
};

#endif