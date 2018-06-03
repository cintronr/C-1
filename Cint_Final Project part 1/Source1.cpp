/*
Rico Cintron
Source1.cpp
Final Project: Part 1


*/





//Function Declarations:
#include "Animals.h"


//Default Constructor:
Animals::Animals() {
	cout << "Parent Constructor" << endl;
	newWeight = 0;

}

//Overloaded Constructor:
Animals::Animals(string name, string color, string type, int weight) {
	cout << "Parent Overloaded Constructor" << endl;
	newName = name;
	newColor = color;
	newType = type;
	newWeight = weight;


}

//Deconstructor:
Animals::~Animals() {

}

//Accessor Functions:
string Animals::getName() const {
	return newName;
}

string Animals::getColor() const {
	return newColor;
}
string Animals::getType() const {
	return newType;

}

int Animals::getWeight() const {
	return newWeight;
}

//CHILD attributes

Snake::Snake(string name, string color, int weight)
{
	cout << "Child Overloaded Constructor" << endl;
	newName = name;
	newColor = color;
	newWeight = weight;
}
string Snake::getName() const {
	return newName;
}

string Snake::getColor() const {
	return newColor;
}


int Snake::getWeight() const {
	return newWeight;
}







void Snake::setEyelids(int eyeLidsIn)
{
	eyelids = eyeLidsIn;

}




int Snake::getEyelids() const
{

	return eyelids;

}

void Bear::setClaws(int clawsIn)
{
	claws = clawsIn;

}
//Deconstructor:
Snake::~Snake() {

}


Bear::Bear(string name, string color, int weight)
{
	cout << "Child Overloaded Constructor" << endl;
	newName = name;
	newColor = color;
	newWeight = weight;
}
string Bear::getName() const {
	return newName;
}

string Bear::getColor() const {
	return newColor;
}


int Bear::getWeight() const {
	return newWeight;
}

int Bear::getClaws() const
{

	return claws;

}
//Deconstructor:
Bear::~Bear() {

}

Lion::Lion(string name, string color, int weight)
{
	cout << "Child Overloaded Constructor" << endl;
	newName = name;
	newColor = color;
	newWeight = weight;
}
string Lion::getName() const {
	return newName;
}

string Lion::getColor() const {
	return newColor;
}


int Lion::getWeight() const {
	return newWeight;
}
void Lion::setMph(int mphIn)
{
	mph = mphIn;

}




int Lion::getMph() const
{

	return mph;

}

//Deconstructor:
Lion::~Lion() {

}