/*
 * Zoo.cpp
 *
 *  Created on: Jun 5, 2018
 *      Author: Howard
 */

#include "Zoo.h"

Zoo::Zoo() {
	bank=100000;
	cost=0;
	profile=0;
}
void Zoo::buy()
{
	cout<<"How many tigers do you want to buy?";
	int numTigers=0;
	do {cin>>numTigers;}
	while(numTigers<0);
	cout<<"How many polar bears do you want to buy?";
	int numBears;
	do{cin>>numBears;}
	while(numBears<0);
	cout<<"How many penguins do you want to buy?";
	int numPenguins;
	do{cin>>numPenguins;}
	while(numPenguins<0);
	for(int i=0;i<numTigers;i++)
		tigers.push_back(*(new Tiger()));
	for(int i=0;i<numBears;i++)
		bears.push_back(*(new PolarBear()));
	for(int i=0;i<numPenguins;i++)
		penguins.push_back(*(new Penguin()));
}
void Zoo::event()
{
	int randNum=(rand()%4)+1;
	switch(randNum)
	{
	case 1:
		cout<<"Choose one animal to die, 1:Tiger;2:Polar Bear;3:Penguin ";
		int dieNum;
		do{cin>>dieNum;}
		while(dieNum!=1&&dieNum!=2&&dieNum!=3);
		switch(dieNum)
		{
		case 1:
			tigers.pop_back();
			break;
		case 2:
			bears.pop_back();
			break;
		case 3:
			penguins.pop_back();
		}
		break;
	case 2:
		int randBonus=(rand()%251)+250;
		profile+=tigers.size()*randBonus;
		profile+=bears.size()*250;
		profile+=penguins.size()*50;
		break;
	case 3:
		born();
		break;
	case 4:

	}
}
void Zoo::born()
{
	cout<<"Choose one animal to born, 1:Tiger;2:Polar Bear;3:Penguin ";
	int bornNum;
	do{cin>>bornNum;}
	while(bornNum!=1&&bornNum!=2&&bornNum!=3);

}
Zoo::~Zoo() {
	// TODO Auto-generated destructor stub
}

