#include "Functions.h"



//Load Game
void loadGame() {
	cout << "Enter the name of the file you wish to load: \n";

	string loadFile;
	cin >> loadFile;
	loadFile += ".txt";

	ifstream Load(loadFile);

	if (Load.is_open()) {
		string info;
		Load >> info;

		
	}
	else {

		cout << "ERROR: File was not found\n"
			<< "Would you like to: \n"
			<< "Input the number\n"
			<< "1. Return to Main Menu\n"
			<< "2. Exit" << endl;

		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			mainMenu();
		case 2:
			exit(1);
		}
	}
}

//Main Menu
void mainMenu() {
	cout << "\t\t\t\t\t\t\t TextQuest\n\n\n\n\n\n\n\n"
		<< "\t\t\t\t\t\t\t Would you like to: \n"
		<< "\t\t\t\t\t\t\t Input the number of your choice\n"
		<< "\t\t\t\t\t\t\t 1. Start New Game\n"
		<< "\t\t\t\t\t\t\t 2. Load Game\n"
		<< "\t\t\t\t\t\t\t 3. Exit" << endl;

	int choice;
	cin >> choice;
	switch (choice) {
	case 1:
		intro();
	case 2:
		loadGame();
	case 3:
		exit(1);
	}
}



//Introduction
void intro() {

	cout << "Hello and welcome to TextQuest!\n"
		<< "What is your name?:\n";
	string name;
	cin >> name;
	 
	
}