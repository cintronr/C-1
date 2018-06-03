/*Rico Cintron
Week 4 Lab (String lab)
9/29/2016
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>


using namespace std;
int main() {
	int selectOpt;
	char runAgain = 'y';//
	while (runAgain == 'y' || runAgain == 'Y')//While loop
	{
	string fName;//String for first name
	string lName;//String for last name
	


	cout << endl;
	cout << ("Hello, and welcome to Rico's Super Turbo 5 string function program!") << endl;
	cout << ("You will manipulate your string using 5 options shortly!") << endl;
	cout << ("Enter your first name:") << endl;
	cin >> fName;
	cout << ("Enter your last name:") << endl;
	cin >> lName;

	
	cout << ("Make a selection on what you want to do with your name") << endl;
	cout << ("1. Concatenation (Joining first and last name together.)\n");
	cout << ("2. Displays how many characters are in your first and last name.\n");
	cout << ("3. Return a character based on selected position, first name only!\n");
	cout << ("4. Convert first and last name to upper case\n");
	cout << ("5. Erase your first name!\n");


	cin >> selectOpt;
	switch (selectOpt)// switch 
		{
	case 1:
		cout << fName << (" ") + lName << endl;
		break;
	case 2:
		cout << ("You have this many characters in your name:");
		cout << fName.length() + lName.length();
		cout << endl;
		break;
	case 3:
		int charSelection;
		cout << ("Select a possition (0 is the first character you entered, 1 second, et cetera") << endl;
		cin >> charSelection;
		cout << fName.at(charSelection) << endl;
		break;
	case 4:
		transform(fName.begin(), fName.end(), fName.begin(), toupper);
		transform(lName.begin(), lName.end(), lName.begin(), toupper);
		cout << fName << (" ") + lName << endl;
		break;
	case 5:
		fName.erase();
		cout << fName << (" ") + lName << endl;
		break;
	default:
		cout << "Invalid selection.";



		}

	cout << "Would you like to try again? (y/n)";
	cin >> runAgain; // change control variable
	system("cls");



	}//end while loop
    cout << "Thank you for using my program!" << endl;
	system("pause");
	return 0;
}