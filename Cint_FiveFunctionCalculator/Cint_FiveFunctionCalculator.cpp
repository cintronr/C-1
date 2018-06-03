/*Rico Cintron
Five Function Calculator
10/7/2016
*/

#include <iostream>
using namespace std;
//function prototypes
double addN(double valueOne, double valueTwo);
int addN(int valueOne, int valueTwo);
double subN(double valueOne, double valueTwo);
double multN(double valueOne, double valueTwo);
double divN(double valueOne, double valueTwo);


int main()
{

	char userSel;
	double firstNum;
	double secondNum;
	double valueOne;
	double valueTwo;
	double answer;
	char looper = 'y';
	
	// while loop
	while (looper == 'y' || looper == 'Y')
	{
		cout << "Hello and welcome to Rico's simple five funtion calculator. \n\n" << endl;
		cout << endl;
		cout << "This calculator will perform addition, subtraction, multiplication or division on two numbers entered." << endl;
		cout << "Please enter the symbol in the parenthesis: Addition(+), Subtracion(-), Multiplication(*) or Division (/)" << endl;
		cout << endl;
		cout << "Oh, by the way... You can select Q to quit but, why would you want to do that?!?" << endl;
		cin >> userSel;
		//switch 
		switch (userSel)
		{
		case '+':
			cout << "Are you entering a Integer or a double? Nevermind, we can handle both thanks to funtion overloading!" << endl;
			cout << "Enter your first number:";
			cin >> firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			//function call
			answer = addN(firstNum, secondNum);
			cout << firstNum <<" " << userSel << " "<< secondNum << "=" << " "  << answer << endl;
			break;
		case '-':
			cout << "Enter your first number:";
			cin >> firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			//function call
			answer = subN(firstNum, secondNum);
			cout << firstNum << " " << userSel << " " << secondNum << "=" << " " << answer << endl;
			break;
		case '*':
			cout << "Enter your first number:";
			cin >> firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			//function call
			answer = multN(firstNum, secondNum);
			cout << firstNum << " " << userSel << " " << secondNum << "=" << " " << answer << endl;
			break;
		case '/':
			cout << "Enter your first number:";
			cin >> firstNum;
			cout << "Enter your second number:";
			cin >> secondNum;
			//function call
			answer = divN(firstNum, secondNum);
			cout << firstNum << " " << userSel << " " << secondNum << "=" << " " << answer << endl;
			break;
		case'Q':
			cout << "Bye!";
			break;
		default:
			cout << "Invalid entry, please try again.";
			cout << endl;

		}
		cout << "Would you like to use this calculator again? (y/n)" << endl;
		cin >> looper;
	}//end while loop
	

	cout << "Thanks for using Rico's fivefunction calculator";
	system("pause");
	return 0;


}

//function definitions
double addN(double valueOne, double valueTwo)
{
	
	return valueOne + valueTwo;
}

double subN(double valueOne, double valueTwo)
{
	return valueOne - valueTwo;
}

double multN(double valueOne, double valueTwo)
{
	return valueOne * valueTwo;
}

double divN(double valueOne, double valueTwo)
{
	return valueOne / valueTwo;
}
		
int addN(int valueOne, int valueTwo)
{
	return valueOne + valueTwo;
}