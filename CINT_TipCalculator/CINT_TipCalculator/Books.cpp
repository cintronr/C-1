#include "Books.h"

Books::Books() {


}
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
