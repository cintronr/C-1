/*Rico Cintron
ASCII Tree Assignment
9-22-2016*/

# include<iostream>
# include<iomanip>
# include<cmath>
# include<string>

using namespace std;


int main()
{

	int linesOnTree;// int for lines requested
	char treeSymbol;// char enabling custom tree characters
	int coutFmt; // cout format
	int lineMath;// math for line output
	char runAgain = 'Y'; // char required for loop

	while (runAgain == 'Y' || runAgain == 'y')// loop for program
	{
		cout << "Welcome to Rico's Christmas tree program" << endl;
		cout << "Please enter a number of lines you want for your Chirstmas tree" << endl;
		cin >> linesOnTree;
		cout << "Please choose the symbol you want your tree made from (example:!,@,#,$ et cetera)" << endl;
		cin >> treeSymbol;
		// for loop for program
		for (int x = 0; x < linesOnTree; x++)
		{
			coutFmt = (linesOnTree - x) - 1;
			lineMath = (2 * x) + 1;
			string cleanUp(coutFmt, ' ');
			string symOut(lineMath, treeSymbol);
			cout << cleanUp << symOut << endl;

			
		}
	cout << "Would you like to draw another tree? (y/n)";
	cin >> runAgain; // change control variable
	}//end while loop




cout << "Thank you for using my program!" << endl;
system("pause");
return 0;

}
