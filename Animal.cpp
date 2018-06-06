/*
 * Animal.cpp
 *
 *  Created on: Jun 5, 2018
 *      Author: Howard
 */

#include "Animal.h"

Animal::Animal() {
	age=3;
	cost=0;
	babyNum=0;
	foodCost=0;
	payoff=0;

}
Animal::Animal(int inAge)
{
	age=inAge;
	cost=0;
	babyNum=0;
	foodCost=0;
	payoff=0;
}
void Animal::setFoodCost(int incost)
{
	if(incost>=0)
		foodCost=incost;
	else throw "Negative Cost";
}

Animal::~Animal() {
	// TODO Auto-generated destructor stub
}

