/*
Rico Cintron
12/10/2016
Final Project: Part 2
University of Advancing Technology
*/

//preprocessor directives
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include"Header.h"

using namespace std;


int main()
{

	char loop = 'y';
	int selection;

	//while loop for program
	while (loop == 'y' || loop == 'Y')
	{ 





	cout << "**************************************************" << endl;
	cout << "Hello! Welcome to Rico's carbon footprint program." << endl;
	cout << "**************************************************" << endl;
	cout << "Emissions are a big threat to our planet. Do your part, see what emissions you cause by using my program. " << endl;
	cout << "What would you like to do?" << endl;
	cout << endl;
	cout << "1. Display possessions, their attributes and carbon emission" << endl;


	//vector
	vector<CarbonFootprint *> CarbonTrak;

	
	CarbonTrak.push_back(new Building());
	CarbonTrak.push_back(new Car());
	CarbonTrak.push_back(new Bicycle());

	cin >> selection;
	switch (selection)
	{
	case 1:
		//for loop that iterates through vector
		for (vector<CarbonFootprint*>::iterator iter = CarbonTrak.begin(); iter != CarbonTrak.end(); ++iter) {
			(*iter)->getCarbonFootprint();
		}
		break;
	}
	cout << "If you would like to return to the main menu, press 'y', to quit press 'n'.(y/n)" << endl;
	cin >> loop;
	system("cls");
	}// endl while loop





	

	cout << "Thank you for using my program! Enjoy your day." << endl;
	system("pause");
	return 0;
	
}
