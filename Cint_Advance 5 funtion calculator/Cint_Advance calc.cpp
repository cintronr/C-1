/*Rico Cintron
Advanced Five Function Calculator
10/7/2016
*/

#include <iostream>
#include "Header for ADV calc.h"

using namespace std;




int main()
{
	char userSel;
	double firstNum;//double for first entered value
	double secondNum;//double for second entered value
	double valueOne;//function double
	double valueTwo;//function double
	double answer;//for selection input
	char looper = 'y';// char for while loop
	//References
	double& rValOne = valueOne;//first reference for function return data	
	double& rValTwo = valueTwo;//second reference for function




	while (looper == 'y' || looper == 'Y')//while loop for additional program attempts
	{
		cout << "Hello and welcome to Rico's Advanced five funtion calculator. \n\n" << endl;
		cout << "*************************POINTER AND REFERENCE EDITION****************************" << endl;
		cout << endl;
		cout << "This calculator will perform addition, subtraction, multiplication or division on two numbers entered." << endl;
		cout << "Please enter the symbol in the parenthesis: Addition(+), Subtracion(-), Multiplication(*) or Division (/)" << endl;
		cout << endl;
		cout << "Oh, by the way... You can select Q to quit." << endl;
		cin >> userSel;
		//switch 
		switch (userSel)
		{
		case '+':
			cout << "Enter your first number:";
			cin >> firstNum;
			double *firstNumPointer;
			firstNumPointer = &firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			//pointer
			double *secondNumPointer;
			secondNumPointer = &secondNum;
			//function call
			answer = addN(*firstNumPointer, *secondNumPointer);
			cout << *firstNumPointer << " " << userSel << " " << *secondNumPointer << "=" << " " << answer << endl;
			break;
		case '-':
			cout << "Enter your first number:";
			cin >> firstNum;
			double *firstNumPointerb;
			firstNumPointerb = &firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			//pointer
			double *secondNumPointerb;
			secondNumPointerb = &secondNum;
			//function call
			answer = subN(*firstNumPointerb, *secondNumPointerb);
			cout << *firstNumPointerb << " " << userSel << " " << *secondNumPointerb << "=" << " " << answer << endl;
			break;
		case '*':
			cout << "Enter your first number:";
			cin >> firstNum;
			double *firstNumPointerc;
			firstNumPointerc = &firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			//pointer
			double *secondNumPointerc;
			secondNumPointerc = &secondNum;
			//function call
			answer = multN(*firstNumPointerc, *secondNumPointerc);
			cout << *firstNumPointerc << " " << userSel << " " << *secondNumPointerc << "=" << " " << answer << endl;
			break;
		case '/':
			cout << "Enter your first number:";
			cin >> firstNum;
			double *firstNumPointerd;
			firstNumPointerd = &firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			//pointer
			double *secondNumPointerd;
			secondNumPointerd = &secondNum;
			//function call
			answer = divN(*firstNumPointerd, *secondNumPointerd);
			cout << *firstNumPointerd << " " << userSel << " " << *secondNumPointerd << "=" << " " << answer << endl;
			break;
		case'Q':
			cout << "Bye!";
			break;
		default:
			cout << "Invalid entry, please try again.";
			cout << endl;

		}
		cout << "Would you like to use my advanced calculator again? (y/n)" << endl;
		cin >> looper;
		system("cls");//clear screen
	}//end while loop

	cout << "Thanks for using Rico's Advanced calculator";
	system("pause");
	return 0;
}

