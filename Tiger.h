/*
 * Tiger.h
 *
 *  Created on: Jun 5, 2018
 *      Author: Howard
 */
#include"Animal.h"
#ifndef TIGER_H_
#define TIGER_H_

class Tiger:public Animal
{
public:
	Tiger();
	Tiger(int);
	void setFoodCost(int);
	virtual ~Tiger();
};

#endif /* TIGER_H_ */
