#include <iostream>
#include "Controller.h"
#include <cstdlib>

using namespace std;

void mainRaffle(int option) 
{

	int numbers[30];

	if (!isdigit(option) && option > 1)
	{
		for (int i = 0; i < option; i++)
		{
			cout << "Write the numbers: "; cin >> numbers[i];
		}

		srand((unsigned)time(NULL));

		int random = rand() % sizeof option;

		cout << "The number is: " << numbers[random] << endl;
	}
	else 
	{
		cout << "write two or more numbers e no write strings";
	}
}