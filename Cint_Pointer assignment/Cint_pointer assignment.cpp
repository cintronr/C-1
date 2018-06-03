/*Rico Cintron
Pointer assignment
10/14/2016*/

#include<iostream>
#include<string>

using namespace std;


int main()
{
	cout << "Hello and welcome to Rico's pointer program!" << endl;
	cout << "You will provide input for 3 variables and an array." << endl;




	// 3 types of variables and custom input for each.
	//Var char w/pointer
	char *pointLetter;
	char letter;
	cout << "Please enter a letter:";
	cin >> letter;
	pointLetter = &letter;
	cout << "You entered: " << *pointLetter << endl;
	cout << "The physical address for " << *pointLetter << " is: " << pointLetter<< endl;
	cout << endl;
	
	   //var float w/pointer
	float *pointNum1;
	float num1;
	cout << "Please enter a whole number: ";
	cin >> num1;
	pointNum1 = &num1;
	cout << "You entered: " << *pointNum1 << endl;
	cout << "The physical address for " << *pointNum1 << " is: " << pointNum1<< endl;
	cout << endl;

	//var double w/pointer
	double *pointNum2;
	double num2;
	cout << "Please enter a number with decimal point: ";
	cin >> num2;
	pointNum2 = &num2;
	cout << "You entered: " << *pointNum2 << endl;
	cout << "The physical address for " << *pointNum2 << " is: " << pointNum2<< endl;
	cout << endl;


	// array consisting of 2 strings

	string firstWord;
	cout << "Enter a word of your choice:"<<endl;
	cin >> firstWord;
	string secondWord;
	cout << "Entar another word:" << endl;
	cin >> secondWord;

	string helloWorld[2] = { firstWord, secondWord };
	string *pointToHelloWorld;
	pointToHelloWorld = helloWorld;

	for (int a = 0; a < 2; a++)
	{
		cout << "Word" << a << " is " << *(pointToHelloWorld + a) << endl;
	}// end of for loop
	cout << "Woah, Word0? Don't Worry. Computers start counting at 0 :D";
	cout << endl;

	system("pause");
	return 0;
}
	



























