/*
 * PolarBear.h
 *
 *  Created on: Jun 5, 2018
 *      Author: Howard
 */
#include "Animal.h"
#ifndef POLARBEAR_H_
#define POLARBEAR_H_

class PolarBear :public Animal
{
public:
	PolarBear():PolarBear(3)
{}
	PolarBear(int);
	void setFoodCost(int);
	virtual ~PolarBear();
};

#endif /* POLARBEAR_H_ */
