#include <iostream>
#include "Direcao.h"

using namespace std;

const string NORTE = "Norte";
const string SUL = "Sul";
const string LESTE = "Leste";
const string OESTE = "Oeste";

Direcao::Direcao(){
	valor = NORTE;
}

void Direcao::girar_direita(){	
	if (valor == NORTE)
		valor = LESTE;
	else if (valor == LESTE)
		valor = SUL;	
	else if (valor == SUL)
		valor = OESTE;
	else
		valor = NORTE;
}

void Direcao::girar_esquerda(){
	if (valor == NORTE)
		valor = OESTE;
	else if (valor == LESTE)
		valor = NORTE;
	else if (valor == SUL)
		valor = LESTE;
	else
		valor = SUL;
}
