#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include "Carro/Motor.h"
#include "Carro/Direcao.h"
#include "Carro/Carro.h"

using namespace std;

void cabecalho();
void menu();

int main()
{	
	menu();
	
	return 0;
}

void cabecalho(){
	cout<< "UTILIZE AS SETAS DO TECLADO"<<endl<<endl;
	
 cout<< "         acelerar"<<endl;
	cout<< "            ^    "<<endl;
	cout<< "Direita <       > Esquerda"<<endl;

	cout<< "            v"<<endl;
	cout<< "          Frear"<<endl;
	
	cout<<endl<<" precione ESC para encerrar"<<endl;
	cout<<"=============================="<<endl<<endl;
}


void menu(){
	cabecalho();
	setlocale(LC_ALL,"portuguese");
	
	Direcao dir = Direcao();
	Motor mot = Motor();
	Carro car = Carro(dir,mot);
	
	 cout<< "velocidade do carro: "<< car.calcular_velocidade() << endl;
	cout<< "Direção do carro: "<<car.calcular_direcao() << endl;


	int tecla = 0;
	while(tecla != 0x1b){
		tecla = 0;
	
	switch(tecla = getch())
	{
	case 72: // cima
		system("cls");
		cabecalho();
		car.acelerar_carro();
		cout<< "velocidade do carro: "<< car.calcular_velocidade() << endl;
		cout<< "Direção do carro: "<<car.calcular_direcao() << endl;
		break;
	case 80: //baixo
		system("cls");
		cabecalho();
		car.frear_carro();
		cout<< "velocidade do carro: "<< car.calcular_velocidade() << endl;
		cout<< "Direção do carro: "<<car.calcular_direcao() << endl;
		break;
	case 75: //esquerda
		system("cls");
		cabecalho();
		car.girar_esquerda_carro();
		cout<< "velocidade do carro: "<< car.calcular_velocidade() << endl;
		cout<< "Direção do carro: "<<car.calcular_direcao() << endl;
		break;
	case 77: // direita
		system("cls");
		cabecalho();
		car.girar_direita_carro();
		cout<< "velocidade do carro: "<< car.calcular_velocidade() << endl;
		cout<< "Direção do carro: "<<car.calcular_direcao() << endl;	
		break;
	case 0x1b:
		system("cls");
		cout<< "FIM"<<endl;
	
	default:
		break;
	}
	 	
	}
}