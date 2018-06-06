/*
 * Tiger.cpp
 *
 *  Created on: Jun 5, 2018
 *      Author: Howard
 */

#include "Tiger.h"

Tiger::Tiger() {
	age=3;
	cost=10000;
	babyNum=1;
	foodCost=0;
	payoff=1000;

}
Tiger::Tiger(int inAge)
{
	age=inAge;
	cost=10000;
	babyNum=1;
	foodCost=0;
	payoff=1000;
}
void Tiger::setFoodCost(int in)
{
	in*=5;
	Animal::setFoodCost(in);
}
Tiger::~Tiger() {
	// TODO Auto-generated destructor stub
}

