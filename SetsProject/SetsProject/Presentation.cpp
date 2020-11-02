#include <iostream>
#include "Data.h"
#include "Graphics.h"

using namespace std;

void checkSize(int m, int n) //function that checks if the number is <= 0
{

	
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
void outputMerge() //function that is for outputting the merging action 
{

	int m, n;
	cout << "Input the size of the first set: ";
	cin >> m;
	cout << "Input the size of the second set: ";
	cin >> n;

	checkSize(m, n);

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
void outputSecton() //function that is for outputting the sectioning action 
{

	int m, n;
	cout << "Input the size of the first set: ";
	cin >> m;
	cout << "Input the size of the second set: ";
	cin >> n;

	checkSize(m, n);

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
void outputDifferenceAB() //function that is for outputting the difference A/B action 
{

	int m, n;
	cout << "Input the size of the first sets: ";
	cin >> m;
	cout << "Input the size of the second sets: ";
	cin >> n;

	checkSize(m, n);

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
void outputDifferenceBA()//function that is for outputting the difference B/A action 
{

	int m, n;
	cout << "Input the size of the first sets: ";
	cin >> m;
	cout << "Input the size of the second sets: ";
	cin >> n;

	checkSize(m, n);

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
void outputSymDifference() // function that is for outputting the symmetrical difference action
{

	int m, n;
	cout << "Input the size of the first sets: ";
	cin >> m;
	cout << "Input the size of the second sets: ";
	cin >> n;

	checkSize(m, n);

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
void outputSubnet() //function that is for outputting the subset action
{

	int m, n;
	cout << "Input the size of the first set: ";
	cin >> m;
	cout << "Input the size of the second set: ";
	cin >> n;

	checkSize(m, n);

	int* arr1 = new int[m];
	int* arr2 = new int[n];

	cout << "Input the numbers of the first set: ";
	input(arr1, m);
	cout << "Input the numbers of the second set: ";
	input(arr2, n);

	subnet(arr1, m, arr2, n);

}
void Menu() // function for the menu
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
        cout << "|                    3. The difference (A/B)            |" << endl;
        cout << "|                    4. The difference (B/A)            |" << endl;
        cout << "|                    5. Symetrical difference           |" << endl;
        cout << "|                    6. Subset                          |" << endl;
        cout << "|                    9. Exit                            |" << endl;
        cout << "+-------------------------------------------------------+" << endl;

        cout << "Choose an option: ";
        cin >> choice;

        cout << "_________________________________________________________" << endl;

        while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 9) // loop for error message 
		{

            cout << endl;
            cout << "+-------------------------------------+" << endl;
            cout << "|  Invalid option, please try again:  |" << endl; // error message
            cout << "+-------------------------------------+" << endl;
            cout << "Choose an option: ";
            cin >> choice;
            cout << endl;
            cout << "_________________________________________________________" << endl;
        }

        switch (choice)
        {
        case 1: //this case is containing the functions connected with merging actions
            outputMerge();
            VisualizationMerge();
            break;

        case 2: //this case is containing the functions connected with sectioning actions
            outputSecton();
            VisualizationSection();
            break;

        case 3: //this case is containing the functions connected with difference actions between A and B
            outputDifferenceAB();
            VisualizationDifferenceA();
            break;

        case 4: //this case is containing the functions connected with difference actions between B and A
            outputDifferenceBA();
            VisualizationDifferenceB();
            break;

        case 5: //this case is containing the functions connected with the symmetrical difference actions between B and A
            outputSymDifference();
            VisualizationSymetricalDiff();
            break;

        case 6: //this case is containing the functions connected with subset actions
            outputSubnet();
            VisualizationSubset();
            break;

        case 9: //this case stops the code from functioning
            break;
        }

    } while (choice != 9); // loop for repeating the menu
}