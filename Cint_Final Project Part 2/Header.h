#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;




//abstract parent class
class CarbonFootprint {
public:
	virtual void getCarbonFootprint();



};
void CarbonFootprint::getCarbonFootprint()
{
	cout << "Parent Display" << endl;

}
//child classes
class Building : public CarbonFootprint {

public:
	virtual void getCarbonFootprint();
	int walls = 4;
	int SQFT = 800;


};
void Building::getCarbonFootprint() {
	cout << endl;
	cout << "Building displayed" << endl;
	double carbon = 0.859;
	cout << "Your building emits " << carbon << " tons of CO2" << endl;
	cout << "Your home has " << walls << " walls" << endl;
	cout << "Your home is " << SQFT << " Square feet" << endl;
	cout << endl;




}

class Car : public CarbonFootprint {
public:
	virtual void getCarbonFootprint();
	int tanksize = 10;
	int mpg = 45;



};

void Car::getCarbonFootprint() {
	cout << endl;
	cout << "Car displayed" << endl;
	int carbon = 4;
	cout << "Your car emits " << carbon << "tons of CO2" << endl;
	cout << "Your car has a gas tank size of: " << tanksize << endl;
	cout << "Your car gets " << mpg << " miles per gallon." << endl;
	cout << endl;



}

class Bicycle : public CarbonFootprint {

public:
	virtual void getCarbonFootprint();
	string frametype = "J Frame";



};
void Bicycle::getCarbonFootprint() {


	cout << endl;
	cout << "Bicycle displayed" << endl;
	int carbon = 0;
	cout << "Your bicycle emits " << carbon << " tons of CO2" << endl;
	cout << "Your bicycle frame is " << frametype << endl;
	cout << endl;


}
