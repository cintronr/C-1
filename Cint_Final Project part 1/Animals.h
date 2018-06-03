#pragma once
/*
Rico Cintron
Header file
Animals.h
Final Project: Part 1


*/
//Header File:

#ifndef ANIMALS_H
#define ANIMALS_H

#include <iostream>
#include <string>

using namespace std;
//////////////////////////////////////Parent Class///////////////////////////////////
class Animals {
public:
	//Default Constructor:
	Animals();


	//Overloaded Constructor:
	Animals(string, string, string, int);

	//Deconstructor:
	~Animals();

	//Accessor Functions:
	string getName() const;

	string getColor() const;

	string getType() const;

	int getWeight() const;

private:
	//Member Variables:
	string newName;
	string newColor;
	string newType;
	int newWeight;
};
/////////////////////////////////////////CHILD CLASS #1///////////////////////////////////////////////////////////////
class Snake : public Animals
{

private:
	//Member Variables:
	int eyelids;
	string newName;
	string newColor;
	int newWeight;



public:
	string getName() const;

	string getColor() const;

	int getWeight() const;
	void setEyelids(int eyeLidsIn);
	//Overloaded Constructor:


	Snake(string, string, int);
	int getEyelids() const;
	static int snakeStaticInt;
	//Default Constructor:
	Snake();

	~Snake();

};
/////////////////////////////////////////CHILD CLASS #2///////////////////////////////////////////////////////////////
class Bear : public Animals
{

private:
	int claws;
	string newName;
	string newColor;
	int newWeight;

public:
	string getName() const;

	string getColor() const;

	int getWeight() const;
	void setClaws(int clawsIn);
	Bear(string, string, int);
	int getClaws() const;
	static int bearStaticInt;
	//Default Constructor:
	Bear();
	~Bear();

};
/////////////////////////////////////////CHILD CLASS #3///////////////////////////////////////////////////////////////
class Lion : public Animals
{

private:
	int mph;
	string newName;
	string newColor;
	int newWeight;

public:
	string getName() const;

	string getColor() const;

	int getWeight() const;
	void setMph(int mphIn);
	Lion(string, string, int);
	int getMph() const;
	static int lionStaticInt;
	//Default Constructor:
	Lion();
	~Lion();
};
#endif
