#pragma once
using namespace std;


class Animal
{

public:
	void setEyes(int eyesin);
	int getEyes();
	void setLegs(int legsin);
	int getLegs();
	void setAge(int agein);
	int getAge();
	static int animalStaticInt;
	int getWeight();
	void setWeight(int newWeight);
	Animal();


	//~Animal();

private:
	int legs;
	int eyes;
	int age;
	int weight;


};


class Snake : public Animal
{

private:
	int eyelids;

public:
	void setEyelids(int eyeLidsIn);
	int getEyelids();
	static int snakeStaticInt;
	Snake();
	//~Snake();

};


class Bear : public Animal
{

private:
	int claws;

public:
	void setClaws(int clawsIn);
	int getClaws();
	static int bearStaticInt;
	Bear();
	//~Bear();

};

class Lion : public Animal
{

private:
	int mane;

public:
	void setMane(int maneIn);
	int getMane();
	static int lionStaticInt;
	Lion();
	//~Lion();

};


