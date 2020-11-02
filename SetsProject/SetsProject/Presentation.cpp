#include <iostream>
#include "Data.h"
#include "Graphics.h"

using namespace std;

void checkSize() {

	int m{}, n{};
	while (m <= 0 || n <= 0) {

		cout << endl;
		cout << "+-------------------------------------+" << endl;
		cout << "|  Invalid input, please try again:   |" << endl;
		cout << "+-------------------------------------+" << endl;
		cout << "Input the size of the first set: ";
		cin >> m;
		cout << "Input the size of the second set: ";
		cin >> n;
	}
}
void outputMerge() {

	int m, n;
	cout << "Input the size of the first set: ";
	cin >> m;
	cout << "Input the size of the second set: ";
	cin >> n;

	checkSize();

	int* arr1 = new int[m];
	int* arr2 = new int[n];

	cout << "Input the numbers of the first set: ";
	input(arr1, m);
	cout << "Input the numbers of the second set: ";
	input(arr2, n);

	cout << endl;
	cout << "Union AB: ";
	int* mergedArray = new int[m + n];
	int mergeCount = merge(arr1, m, arr2, n, mergedArray);
	for (int i = 0; i < mergeCount; i++)
	{
		cout << mergedArray[i] << " ";
	}
}
void outputSecton() {

	int m, n;
	cout << "Input the size of the first set: ";
	cin >> m;
	cout << "Input the size of the second set: ";
	cin >> n;

	while (m <= 0 || n <= 0) {

		cout << endl;
		cout << "+-------------------------------------+" << endl;
		cout << "|  Invalid input, please try again:  |" << endl;
		cout << "+-------------------------------------+" << endl;
		cout << "Input the size of the first set: ";
		cin >> m;
		cout << "Input the size of the second set: ";
		cin >> n;
	}

	int* arr1 = new int[m];
	int* arr2 = new int[n];

	cout << "Input the numbers of the first set: ";
	input(arr1, m);
	cout << "Input the numbers of the second set: ";
	input(arr2, n);

	cout << endl;
	cout << "Intersection AB: ";
	int* sectArray = new int[m];
	int sectCount = section(arr1, m, arr2, n, sectArray);
	for (int i = 0; i < sectCount; i++)
	{
		cout << sectArray[i] << " ";
	}
}
void outputDifferenceAB() {

	int m, n;
	cout << "Input the size of the first sets: ";
	cin >> m;
	cout << "Input the size of the second sets: ";
	cin >> n;

	checkSize();

	int* arr1 = new int[m];
	int* arr2 = new int[n];

	cout << "Input the elements of the first set: ";
	input(arr1, m);
	cout << "Input the elements of the second set: ";
	input(arr2, n);

	cout << endl;
	cout << "Difference A/B: ";
	int* diffArray{};
	vector<int> diffABCount = differenceAB(arr1, m, arr2, n, diffArray);

	for (int i = 0; i < diffABCount.size(); i++)
	{
		cout << diffABCount[i] << " ";
	}
}
void outputDifferenceBA() {

	int m, n;
	cout << "Input the size of the first sets: ";
	cin >> m;
	cout << "Input the size of the second sets: ";
	cin >> n;

	checkSize();

	int* arr1 = new int[m];
	int* arr2 = new int[n];

	cout << "Input the elements of the first set: ";
	input(arr1, m);
	cout << "Input the elements of the second set: ";
	input(arr2, n);

	cout << endl;
	cout << "Difference B/A: ";
	int* diffArray{};
	vector<int> diffBACount = differenceBA(arr1, m, arr2, n, diffArray);

	for (int i = 0; i < diffBACount.size(); i++)
	{
		cout << diffBACount[i] << " ";
	}
}
void outputSymDifference() {

	int m, n;
	cout << "Input the size of the first sets: ";
	cin >> m;
	cout << "Input the size of the second sets: ";
	cin >> n;

	checkSize();

	int* arr1 = new int[m];
	int* arr2 = new int[n];

	cout << "Input the elements of the first set: ";
	input(arr1, m);
	cout << "Input the elements of the second set: ";
	input(arr2, n);

	cout << endl;
	cout << "Symmetrical difference: ";

	int* diffArray{};
	vector<int> symDiffCount = symDifference(arr1, m, arr2, n, diffArray);

	for (int i = 0; i < symDiffCount.size(); i++)
	{
		cout << symDiffCount[i] << " ";
	}
}
void outputSubnet() {

	int m, n;
	cout << "Input the size of the first set: ";
	cin >> m;
	cout << "Input the size of the second set: ";
	cin >> n;

	checkSize();

	int* arr1 = new int[m];
	int* arr2 = new int[n];

	cout << "Input the numbers of the first set: ";
	input(arr1, m);
	cout << "Input the numbers of the second set: ";
	input(arr2, n);

	subnet(arr1, m, arr2, n);

}
void Menu()
{
    int choice;

    do {

        cout << "_________________________________________________________" << endl;
        cout << endl;

        cout << "        +-------------------------------------+" << endl;
        cout << "        |                                     |" << endl;
        cout << "        |             Sets Project            |" << endl;
        cout << "        |                                     |" << endl;
        cout << "        +-------------------------------------+" << endl;

        cout << endl;

        cout << "+-------------------------------------------------------+" << endl;
        cout << "|               Please, choose an action                |" << endl;
        cout << "|                                                       |" << endl;
        cout << "|                    1. Merge                           |" << endl;
        cout << "|                    2. Section                         |" << endl;
        cout << "|                    3. The difference (A\B)             |" << endl;
        cout << "|                    4. The difference (B\A)             |" << endl;
        cout << "|                    5. Symetrical difference           |" << endl;
        cout << "|                    6. Subset                          |" << endl;
        cout << "|                    9. Exit                            |" << endl;
        cout << "+-------------------------------------------------------+" << endl;

        cout << "Choose an option: ";
        cin >> choice;

        cout << "_________________________________________________________" << endl;

        while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 9) {

            cout << endl;
            cout << "+-------------------------------------+" << endl;
            cout << "|  Invalid option, please try again:  |" << endl;
            cout << "+-------------------------------------+" << endl;
            cout << "Choose an option: ";
            cin >> choice;
            cout << endl;
            cout << "_________________________________________________________" << endl;
        }

        switch (choice)
        {
        case 1:
            outputMerge();
            VisualizationMerge();
            break;

        case 2:
            outputSecton();
            VisualizationSection();
            break;

        case 3:
            outputDifferenceAB();
            VisualizationDifferenceA();
            break;

        case 4:
            outputDifferenceBA();
            VisualizationDifferenceB();
            break;

        case 5:
            outputSymDifference();
            VisualizationSymetricalDiff();
            break;

        case 6:
            outputSubnet();
            VisualizationSubset();
            break;

        case 9:
            break;
        }

    } while (choice != 9);
}