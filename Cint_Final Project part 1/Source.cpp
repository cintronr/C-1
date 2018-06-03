/*
Rico Cintron
Final Project: Part 1
12/2/2016
Source.cpp



*/







//Preprocessor directives
#include <iostream>
#include <string>
#include <vector>
#include "Animals.h"

using namespace std;
// vectors
void createVec(vector<Animals>&);
void showVec(const vector<Animals>&);
void createSnakeVec(vector<Snake>&);
void createBearVec(vector<Bear>&);
void createLionVec(vector<Lion>&);
void showSnakeVec(const vector<Snake>&);
void showBearVec(const vector<Bear>&);
void showLionVec(const vector<Lion>&);

// main program
int main() {
	vector<Animals> uVec;
	vector<Snake> sVec;
	vector<Bear> bVec;
	vector<Lion> lVec;
	char loop = 'y';
	int selection;
	
	



	//while loop for program
	while (loop == 'y' || loop == 'Y')

	{
		cout << "*******************************" << endl;
		cout << "Hello! Welcome to Rico's zoo." << endl;
		cout << "*******************************" << endl;
		cout << "What would you like to do at my zoo?" << endl;
		cout << endl;
		cout << "1. Add animals to Rico's zoo." << endl;
		cout << "2. See the animals you added to Rico's zoo." << endl;
		cout << "3. Hear the animals!." << endl;
		cout << "4. See animals already in Rico's zoo." << endl;
		// switch for menu
		cin >> selection;
		switch (selection)
		{
		case 1:
		// first menu enabling user to add animals to my zoo
		cout << endl;
		createVec(uVec);
		break;
		case 2:
		// show animals added to my zoo
		showVec(uVec);
		break;
		case 3:
			//basic cout commands for animal "noises".
			cout << "Hiss!" << endl;
			cout << "Growl!" << endl;
			cout << "Roar!" << endl;
			cout << "Bark!" << endl;
			cout << "Mooo!" << endl;
			break;

		case 4:
			//clear screen command
			system("cls");
			// function call, displaying animals already existing in my program
			createSnakeVec(sVec);
			showSnakeVec(sVec);
			createBearVec(bVec);
			showBearVec(bVec);
			createLionVec(lVec);
			showLionVec(lVec);
			cout << endl;
		break;
		}
		cout << "If you would like to return to the main menu, press 'y', to quit press 'n'.(y/n)" << endl;
		cin >> loop;
		system("cls");
	}// endl while loop


	cout << "Thank you for visiting my zoo! Enjoy the rest of your day." << endl;
	system("pause");
	return 0;



}

//Create Vector Function:
void createVec(vector<Animals>& newVec) {

	//Variables for this function
	int aSize;
	string name;
	string color;
	string type;
	int weight;

	cout << "Enter number of animals you would like to add to my zoo: ";
	cin >> aSize;

	for (int i = 0; i < aSize; i++) {//for loop enabling multiple animal entry

		cout << "Enter animal name: " << endl;
		cin >> name;
		cout << endl;
		cout << "Enter color: " << endl;
		cin >> color;
		cout << endl;
		cout << "Enter animal type: (Snake, Sheep,etc)" << endl;
		cin >> type;
		cout << endl;
		cout << "Enter weight: " << endl;
		cin >> weight;

		Animals newAnimal(name, color, type, weight);
		newVec.push_back(newAnimal);// move object into vector

	}


}
void createSnakeVec(vector<Snake>& newSnakeVec)
{
	//Variables for snake Vector
	string name;
	string color;
	int weight;

	// preset snakes in exhibit
	//Snake 1
	name = "James";
	color = "Red";
	weight = 5;
	Snake newSnake(name, color, weight);
	newSnake.setEyelids(0);
	newSnakeVec.push_back(newSnake);
	//Snake 2
	name = "Sarah";
	color = "Blue";
	weight = 4;
	Snake newSnake2(name, color, weight);
	newSnake2.setEyelids(0);
	newSnakeVec.push_back(newSnake2);

}
//function for animal display
void showVec(const vector<Animals>& newVec) {
	//function int
	int z = 1;
	unsigned int vecSize = newVec.size();
	//for loop
	for (unsigned int i = 0; i < vecSize; i++) {
		cout << endl;
		cout << "Animal number:" << z++ << endl;
		cout << "Animal Name: " << newVec[i].getName() << endl;
		cout << "Color: " << newVec[i].getColor() << endl;
		cout << "Type of animal:" << newVec[i].getType() << endl;
		cout << "Weight: " << newVec[i].getWeight() << endl;

	}

}
//function for animal display
void showSnakeVec(const vector<Snake>& newSnakeVec)
{

	unsigned int vecSize = newSnakeVec.size();
	cout << "*************************************ENTERING SNAKE EXHIBIT***************************************" << endl;
	cout << "Look at our snake exhibit!";
	cout << endl;
	for (unsigned int i = 0; i < vecSize; i++) {
		cout << endl;
		cout << "Animal Name: " << newSnakeVec[i].getName() << endl;
		cout << "Color: " << newSnakeVec[i].getColor() << endl;
		cout << "Weight: " << newSnakeVec[i].getWeight() << endl;
		cout << "Eyelids: " << newSnakeVec[i].getEyelids() << endl;



	}
}//function for animal creation
void createBearVec(vector<Bear>& newBearVec)
{
	//Variables for Bear Vector
	string name;
	string color;
	int weight;
	cout << endl;
	name = "Paul";
	color = "Brown";
	weight = 600;
	Bear newBear(name, color, weight);
	newBear.setClaws(18);
	newBearVec.push_back(newBear);
	name = "Zoe";
	color = "Black";
	weight = 354;
	Bear newBear2(name, color, weight);
	newBear2.setClaws(17);
	newBearVec.push_back(newBear2);

}
//function for animal display
void showBearVec(const vector<Bear>& newBearVec)
{

	unsigned int vecSize = newBearVec.size();
	cout << "**************************************ENTERING BEAR EXHIBIT******************************************" << endl;
	cout << "Look at our bear exhibit!" << endl;
	cout << endl;
	for (unsigned int i = 0; i < vecSize; i++) {
		cout << endl;
		cout << "Animal Name: " << newBearVec[i].getName() << endl;
		cout << "Color: " << newBearVec[i].getColor() << endl;
		cout << "Weight: " << newBearVec[i].getWeight() << endl;
		cout << "Claws: " << newBearVec[i].getClaws() << endl;



	}
}
//function for animal creation
void createLionVec(vector<Lion>& newLionVec)
{
	//Variables for Lion Vector
	string name;
	string color;
	int weight;
	cout << endl;
	name = "Runner";
	color = "Blonde";
	weight = 300;
	Lion newLion(name, color, weight);
	newLion.setMph(60);
	newLionVec.push_back(newLion);
	name = "Sophia";
	color = "Brown";
	weight = 250;
	Lion newLion2(name, color, weight);
	newLion2.setMph(17);
	newLionVec.push_back(newLion2);

}
//function for animal display
void showLionVec(const vector<Lion>& newLionVec)
{

	unsigned int vecSize = newLionVec.size();
	cout << "**********************************ENTERING LION EXHIBIT*********************************" << endl;
	cout << "Look at our lion exhibit!"<< endl;
	cout << endl;
	for (unsigned int i = 0; i < vecSize; i++) {
		cout << endl;
		cout << "Animal Name: " << newLionVec[i].getName() << endl;
		cout << "Color: " << newLionVec[i].getColor() << endl;
		cout << "Weight: " << newLionVec[i].getWeight() << endl;
		cout << "Max speed: " << newLionVec[i].getMph() << endl;



	}
}
