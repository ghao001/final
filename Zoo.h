/*
 * Zoo.h
 *
 *  Created on: Jun 5, 2018
 *      Author: Howard
 */
#include"PolarBear.h"
#include"Penguin.h"
#include"Tiger.h"
#include<vector>
#include<cstdlib>
#include<iostream>
#ifndef ZOO_H_
#define ZOO_H_
using namespace std;
class Zoo {
private:
	vector<Tiger> tigers;
	vector<Penguin> penguins;
	vector<PolarBear> bears;
	int bank;
	int cost;
	int profile;
public:
	Zoo();
	void buy();
	void event();
	void born();
	virtual ~Zoo();
};

#endif /* ZOO_H_ */
