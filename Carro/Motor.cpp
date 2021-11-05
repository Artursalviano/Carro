#include <iostream>
#include <stdio.h>
#include "Motor.h"

Motor::Motor(){
	velocidade = 0.0;
}

void Motor::acelerar(){
	velocidade++;
	
}

void Motor::frear(){
	velocidade--;
	if(velocidade<=0){
		velocidade = 0.0;
	}
	
}