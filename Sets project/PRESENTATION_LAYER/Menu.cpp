#include <iostream>
#include <studio.h>
#include "..\DATA_LAYER\Data.h"
#include "..\DATA_LAYER\Data.cpp"

using namespace std;

void Menu()
{

	int choice;

    cout << "_________________________________________________________" << endl;
    cout << endl;

    cout << "+-------------------------------------------------------+" << endl;
    cout << "|               Please, choose an action                |" << endl;
    cout << "|                                                       |" << endl;
    cout << "|                    1. Merge                           |" << endl;
    cout << "|                    2. Section                         |" << endl;
    cout << "|                    3. The difference (A\B)            |" << endl;
    cout << "|                    4. The difference (B\A)            |" << endl;
    cout << "|                    5. Symetrical difference           |" << endl;
    cout << "|                    6. Subset                          |" << endl;
    cout << "|                    9. Exit                            |" << endl;
    cout << "+-------------------------------------------------------+" << endl;

	cin >> choice;

    switch (choice) {
    case 1:
        void input(arr[], N);
        int merge(arr1, m, arr2, n, *mergedArray);
        void outputMerge();
        break;

    case 2:
        void input(arr[], N);
        int section(arr1, m, arr2[], n, *sectArray);
        void outputSecton();
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