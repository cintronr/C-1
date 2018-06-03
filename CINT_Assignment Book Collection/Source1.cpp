#include "Header1.h"



void Animal::setEyes(int eyesin)
{
	eyes = eyesin;
}
int Animal::getEyes()
{
	return eyes;
}
void Animal::setLegs(int legsin)
{
	legs = legsin;
}
int Animal::getLegs()
{
	return legs;
}
void Animal::setAge(int agein)
{
	age = agein;
}
int Animal::getAge()
{
	return age;
}


void Animal::setWeight(int weightIn)
{
	weight = weightIn;
}
int Animal::getWeight()
{
	return weight;
}





void Snake::setEyelids(int eyeLidsIn)
{
	eyelids = eyeLidsIn;

}




int Snake::getEyelids()
{

	return eyelids;

}

void Bear::setClaws(int clawsIn)
{
	claws = clawsIn;

}




int Bear::getClaws()
{

	return claws;

}

void Lion::setMane(int maneIn)
{
	mane = maneIn;

}




int Lion::getMane()
{

	return mane;

}

int Animal::animalStaticInt = 0;
int Snake::snakeStaticInt = 0;
int Bear::bearStaticInt = 0;
int Lion::lionStaticInt = 0;
