#include <iostream>
#include <studio.h>
#include "..\DATA_LAYER\Data.h"
#include "..\DATA_LAYER\Data.cpp"

using namespace std;

void Menu()
{
	int choice;

    cout << endl;

    cout << "        +-------------------------------------+" << endl;
    cout << "        |                                     |" << endl;
    cout << "        |             Sets Project            |" << endl;
    cout << "        |                                     |" << endl;
    cout << "        +-------------------------------------+" << endl;

    cout << endl;

    cout << "+-------------------------------------------------------+" << endl;
    cout << "|                    1. Merge                           |" << endl;
    cout << "|                    2. Section                         |" << endl;
    cout << "|                    3. The difference (A\B)            |" << endl;
    cout << "|                    4. The difference (B\A)            |" << endl;
    cout << "|                    5. Symetrical difference           |" << endl;
    cout << "|                    6. Subset                          |" << endl;
    cout << "|                    9. Exit                            |" << endl;
    cout << "+-------------------------------------------------------+" << endl;

    cout << endl;

    cout << "Choose an option" ;
	cin >> choice;

    cout << "_________________________________________________________" << endl;

    switch (choice) 
    {
    case 1:
        outputMerge();
        break;

    case 2:
        outputSecton();
        break;

    case 3:
        //
        break;

    case 4:
        //
        break;

    case 5:
        //
        break;

    case 6:
        //
        break;

    case 9:
        break;
    
    }
}