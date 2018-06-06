/*
 * Penguin.h
 *
 *  Created on: Jun 5, 2018
 *      Author: Howard
 */
#include"Animal.h"
#ifndef PENGUIN_H_
#define PENGUIN_H_

class Penguin :public Animal
{
public:
	Penguin():Penguin(3)
{}
	Penguin(int);
	virtual ~Penguin();
};

#endif /* PENGUIN_H_ */
