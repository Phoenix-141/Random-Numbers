#include <iostream>
#include "Controller.h"

using namespace std;

int main()
{
    int option;

    cout << "Welcome to random reffle © All rights reserved \n" << endl;

    cout << "how many numbers do you want to draw?: ";

    cin >> option;

    mainRaffle(option);

    return 0;
}
