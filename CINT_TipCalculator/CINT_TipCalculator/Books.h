//Header


#include<iostream>
#include<string>
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

