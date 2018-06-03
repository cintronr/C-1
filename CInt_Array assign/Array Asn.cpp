#include<iostream>
using namespace std;

int main()


{
	cout << "Welcome to my program named Breaths and Steps!\n";
	cout << endl;
	cout << "Make up values, as we are just working with arrays\n";
	cout << "This first array will consist of steps taken up stairs";
	cout << endl;
	char runAgain = 'y';
	while (runAgain == 'y' || runAgain == 'Y')
	{
		const int steps = 4;//First array
		int a, level[steps], total = 0;

		const int breaths = 4;//Second array
		int b, puff[breaths], btotal = 0;

		double sum[3];// Third array
		int c;
		int grandTotal;

		//First array loop
		for (a = 0; a < steps; a++)
		{
			cout << "Enter # of steps taken: ";
			cin >> level[a];
		}

		cout << "\nThe steps: ";

		for (a = 0; a < steps; a++)
		{
			cout << " " << level[a];
			total = total + level[a];
		}

		cout << " added together equal: " << total << endl;
		//Second array loop
		cout << "This is the second array, input number of breaths taken per step set";
		cout << endl;
		for (b = 0; b < breaths; b++)
		{
			cout << "Enter # of breaths taken: ";
			cin >> puff[b];
		}

		cout << "\nThe breaths: ";

		for (b = 0; b < breaths; b++)
		{
			cout << " " << puff[b];
			btotal = btotal + puff[b];
		}

		cout << " added together equal: " << btotal << endl;
		cout << endl;
		//Third and final array output
		cout << "This third array will consist of totals from the first two arrays";
		cout << endl;
		for (c = 0; c < 1; c++)
		{
			sum[0] = level[0] + puff[0];
			sum[1] = level[1] + puff[1];
			sum[2] = level[2] + puff[2];
			sum[3] = level[3] + puff[3];
			grandTotal = sum[0] + sum[1] + sum[2] + sum[3];
		}
		cout << "1st set of breaths and steps come out to: " << sum[0] << endl;
		cout << "2nd set of breaths and steps come out to: " << sum[1] << endl;
		cout << "3rd set of breaths and steps come out to: " << sum[2] << endl;
		cout << "4th set of breaths and steps come out to: " << sum[3] << endl;
		cout << endl;
		cout << "Grand total of steps and breaths is: " << grandTotal << endl;
		cout << "would you like to run this program again? (y/n)";
		cin >> runAgain;
		system("cls");


	}//Where my while loop ends.






	cout << "Thanks for using my program!";
	cout << endl;
	system("pause");
	return 0;

}