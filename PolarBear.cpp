/*
 * PolarBear.cpp
 *
 *  Created on: Jun 5, 2018
 *      Author: Howard
 */

#include "PolarBear.h"

PolarBear::PolarBear(int in)
{
	age=in;
	cost=5000;
	babyNum=2;
	foodCost=0;
	payoff=250;
}
void PolarBear::setFoodCost(int in)
{
	in*=3;
	Animal::setFoodCost(in);
}
PolarBear::~PolarBear() {
	// TODO Auto-generated destructor stub
}

