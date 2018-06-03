/*Rico Cintron
Tempurature conversion assignment
9/24/2016*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	
	char looper = 'y';
	int tempValue;
	char tempSymbol;
	int celToFah;
	int fahToCel;





	//while loop for program
	while(looper == 'y' || looper == 'y')

	{
		cout << "Hello, and welcome to Rico's temperature conversion program." << endl;
		cout << "Please enter a tempurature value." << endl;
		cin >> tempValue;
		cout << "Is this temperature value in Fahrenheit or Celsius? (Please enter just f or c)" << endl;
		cin >> tempSymbol;



	//switch with char input for selections 
	switch(tempSymbol)
		{
		case'c':
		case'C':
			celToFah = tempValue * 9 / 5 + 32;
			cout << tempValue << " degrees Celsius converts to:\n" << celToFah << " degrees Fahrenheit" << endl;
			//Celsius to Fahrenheit conversion
			break;
		case'f':
		case'F':
			fahToCel = ((tempValue - 32) * 5) / 9;
			cout << tempValue << " degrees Fahrenheit converts to:\n" << fahToCel << " degrees Celsius" << endl;
			//Fahrenheit to Celsius conversion
			break;
		default:
			cout << "Incorrect choice, please select either F or C." << endl;

		}

		cout << "Would you like to convert another value? (y/n)" << endl;
			cin >> looper;
	}//end while loop




	cout << "Thanks for using my temperature conversion program!" << endl;
	system("pause");
	return 0;
		













}