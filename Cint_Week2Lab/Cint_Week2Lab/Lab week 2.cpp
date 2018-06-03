/* Rico Cintron
Lab Output Formatting
(9/15/2016*/
# include <iostream>
# include <iomanip>
# include <string>
# include <algorithm>
# include  <cstdlib>

using namespace std;


int main() {

	string Sentance; //String assignment for upper and lower converstion
	double number; //Floating point input assignment
	cout << "Hello, welcome to my lab. This lab will include number formatting and sentances entered being displayed in all lower and all upper case.\n";
	cout << "Please enter a decimal number!\n";
	cin >> number;
	cout << "Your number has been rounded to\n";
	std::cout << std::setprecision(1) << number << '\n';
	cout << "Your number is being shown with two decimal points\n";
	std::cout << std::setprecision(3) << number << '\n';
	//Now begins user sentance input, display in all capital case and all lower case.
	cout << "Part two: Sentance entered will be converted to all uppercase and then all lower case.\n";
	cout << "Please enter a complete sentance.\n";
	cin.ignore();
	getline(cin, Sentance);
	transform(Sentance.begin(), Sentance.end(), Sentance.begin(), ::toupper);
	cout << Sentance << "\n";
	transform(Sentance.begin(), Sentance.end(), Sentance.begin(), ::tolower);
	cout << Sentance << "\n";





	system("pause");
	return 0;
}