#include<iostream>
#include<string>
#include<vector>
#include "Books.h"


using namespace std;

class Books {
public:
	//Default constructor

	Books();
	string NewTitleInput;
	string NewAuthor;
	int NewYear;
	string NewNotes;

	//Overload Constructor
	Books(string, string, int, string);

	//Accessor Functions
	string getTitleInput();
	string getAuthor();
	int getYear();
	string getNotes();


};
Books::Books(string TitleInput, string Author, int Year, string Notes)
{
	NewTitleInput = TitleInput;
	NewAuthor = Author;
	NewYear = Year;
	NewNotes = Notes;




}

string Books::getTitleInput()
{
	return NewTitleInput;
}
string Books::getAuthor()
{
	return NewAuthor;
}
int Books::getYear()
{
	return NewYear;
}
string Books::getNotes()
{
	return NewNotes;
}

void fillVector(vector<Books>&);
//Fill vector- Fill in book information

void printVector(const vector<Books>&);
//Prints library

int main() {

	vector<Books> bookCollection;


	fillVector(bookCollection);
	printVector(bookCollection);
	return 0;

}

void fillVector(vector<Books>& newBookCollection) {
	string TitleInput;
	string Author;
	int Year;
	string Notes;

	cout << "How many books are in your library? ";
	int librarySize;
	cin >> librarySize;

	for (int i = 0; i < librarySize; i++) {

		cout << "Enter Book name: ";
		getline(cin, TitleInput);
		cout << "Enter Author name: ";
		getline(cin, Author);
		cout << "Enter Copyright year: ";
		cin >> Year;
		cout << "Enter Book notes: ";
		getline(cin, Notes);

		Books newBooks(TitleInput, Author, Year, Notes);
		newBookCollection.push_back(newBooks);
		cout << endl;
	}
	cout << endl;
}









void printVector(vector<Books>& newBookCollection) {

	unsigned int size = newBookCollection.size();

	for (unsigned int i = 0; i < size; i++) {
		cout << "Book Name:" << newBookCollection[i].getTitleInput() << endl;
		cout << "Authors Name:" << newBookCollection[i].getAuthor() << endl;
		cout << "Book Year:" << newBookCollection[i].getYear() << endl;
		cout << "Authors Name:" << newBookCollection[i].getNotes() << endl;
		cout << endl;
	}

}
