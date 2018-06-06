/*
 * Animal.h
 *
 *  Created on: Jun 5, 2018
 *      Author: Howard
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal {
private:
	int age;
	int cost;
	int babyNum;
	int foodCost;
	int payoff;
public:
	Animal();
	Animal(int);
	int getAge() const
	{	return age;}
	int getCost() const
	{	return cost;}
	int getBaby() const
	{	return babyNum;}
	int getFoodCost() const
	{	return foodCost;}
	int getPayoff() const
	{	return payoff;}
	void increaseAge()
	{	age++;}
	virtual void setFoodCost(int);

	virtual ~Animal();
};

#endif /* ANIMAL_H_ */
