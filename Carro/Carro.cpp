#include <stdio.h>
#include <iostream>
#include "Motor.h"
#include "Direcao.h"
#include "Carro.h"

using namespace std;

Carro::Carro(Direcao direcao, Motor motor){
	this->direcao = direcao;
	this->motor = motor;
}

double Carro::calcular_velocidade(){
	return motor.velocidade;
}
string Carro::calcular_direcao(){
	return direcao.valor;
}

void Carro::girar_direita_carro(){
	direcao.girar_direita();
}

void Carro::girar_esquerda_carro(){
	direcao.girar_esquerda();
}

void Carro::acelerar_carro(){
	return motor.acelerar();
}

void Carro::frear_carro(){
	return motor.frear();
}