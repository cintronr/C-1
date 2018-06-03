/*Rico Cintron
Assignment Book Collection and File
10/28/2016
*/
//preprocessor directives
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include "Header1.h"
using namespace std;

//vector declaration 
vector<string> bookCollection;
vector<string> displayCollection;
vector<string>::iterator myIter;
vector<string>::const_iterator cITER;
vector<Animal> Zoo;


//funtion which uses vector to add books
Animal push_back()
{
	cout << "Enter an Animals weight!\n" << endl;
	cout << "If you need to add another animal, simply return to the main menu and select add a animal again\n" << endl;
	Snake Test;
	Test.setWeight&(10);
	Zoo.push_back(Test.setWeight);
	cout << endl;
	return Test;

}
//function which allows for removal of a book
string removeBook()
{
	cin.ignore();
	string finder;
	getline(cin, finder);
	if (std::find(bookCollection.begin(), bookCollection.end(), finder) != bookCollection.end())
	{
		cout << "We found your book... Deleting now.\n";
		bookCollection.erase(std::remove(bookCollection.begin(), bookCollection.end(), finder), bookCollection.end());
	}
	else
	{
		cout << "Sorry, Title not found";
	}
	return finder;
}
// function performing book display
string bookDisplay()
{
	string test;
	cout << "Behold, the books in your library! " << endl;
	for (cITER = bookCollection.begin(); cITER != bookCollection.end(); cITER++)
	{
		cout << *cITER << endl;
	}
	return test;





}









int main()
{
	fstream myFile;//I/O file 
	char run = 'y';
	while (run == 'y' || run == 'Y') //while loop for main program
	{
		//main menu
		int userSelect;
		cout << "Hello! Welcome to Rico's Library!\n";
		cout << "Please select an option from this menu:\n";
		cout << "1.Add a book to the collection\n";
		cout << "2.Display the books currently in the collection\n";
		cout << "3.Remove a book from the collection\n";
		cout << "4.Stop adding books and store the data in an external file\n";
		cout << "5.Read data into, and display from a new vector!\n";
		cin >> userSelect;
		switch (userSelect)
		{
		// add book
		case 1:
			cout << "Add book to collection\n";
			push_back();
			cout << "Here are your books thus far:\n";
			for (cITER = bookCollection.begin(); cITER != bookCollection.end(); cITER++)
			{
				cout << *cITER << endl;
			}
			break;
			// display book
		case 2:
			bookDisplay();
			break;
			// remove a book
		case 3:
			cout << "Remove a book from the collection";
			removeBook();
			break;
		case 4:
			//transfer books to external file
			cout << "We are done adding books and will store data to external file!\n";
			sort(bookCollection.begin(), bookCollection.end());

			myFile.open("sorthold.txt");
			for (cITER = bookCollection.begin(); cITER != bookCollection.end(); cITER++)
			{
				myFile << *cITER << endl;
			}
			myFile.close();
			//sort();
			break;
			//retreive books from file and place in new vector, ultimately displaying the books
		case 5:
			cout << "New vector transfer and display\n";
			cout << "These are the books in the new vector:\n";
			string txtXfer;
			myFile.open("sorthold.txt");
			while (getline(myFile, txtXfer))
			{
				displayCollection.push_back(txtXfer);

			}
			for (myIter = displayCollection.begin(); myIter != displayCollection.end(); myIter++)
			{

				cout << *myIter << endl;
			}
			myFile.close();
		}

		cout << "Would you like to add another book or go back to the main menu? (y/n)" << endl;
		cin >> run;
		system("cls");
	}//end while loop
	system("pause");
	return 0;


}