#include <iostream>
#include <cmath>
 

using namespace std;

int main()
{
	int choice;
	bool run = true;

	while (run != false) {
		cout << "*******************************\n";
		cout << "Welcome to the Quiz\n\n";
		cout << " 1 - Easy\n";
		cout << " 2 - Moderate\n";
		cout << " 3 - Advanced\n";
		cout << " 4 - QUIT\n\n";
		cout << "Please choose your difficulty and press return: \n";

		cin >> choice;

		switch (choice)
		{
		case 1:


		case 2:
			

		case 3:
			


		case 4:
			cout << "QUITTING.\n\n";
			cout << "Goodbye.\n";
			cout << "*******************************\n";
			run = false;
			break;

		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}

		

		cout << "Goodbye.\n";
		cout << "*******************************\n";
		run = false;
		break;
	}
	return 0;
}