#include <iostream>
#include "Data.h"
#include <vector>

using namespace std;

/********************SETS-DATA**********************/

void input(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}
int merge(int arr1[], int m, int arr2[], int n, int* mergedArray)
{
	int temp, count = 0, index = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - count; j++)
		{
			if (arr1[i] == arr2[j])
			{
				temp = arr2[j];
				arr2[j] = arr2[n - 1 - count];
				arr2[n - 1 - count] = temp;
				count++;
			}
		}
		mergedArray[index++] = arr1[i];
	}
	for (int i = 0; i < n - count; i++)
	{
		mergedArray[index++] = arr2[i];
	}
	return index;
}
int section(int arr1[], int m, int arr2[], int n, int* sectArray)
{
	int index = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i] == arr2[j])
			{
				sectArray[index++] = arr1[i];
			}
		}
	}
	return index;
}
vector<int> differenceAB(int arr1[], int m, int arr2[],int n, int* diffArray) {

	int index = 0;
	vector<int> difference;

	for (int i = 0; i < m; i++) {
		index = 0;
		for (int j = 0; j < n; j++) {

			if (arr1[i] == arr2[j])
			{
				index++;
			}
		}
		if (index == 0)
		{
			difference.push_back(arr1[i]);
		}
	}
	
	return difference;
}
vector<int> differenceBA(int arr1[], int m, int arr2[], int n, int* diffArray) {

	int index = 0;
	vector<int> difference;

	for (int i = 0; i < m; i++) {
		index = 0;
		for (int j = 0; j < n; j++) {

			if (arr2[i] == arr1[j])
			{
				index++;
			}
		}
		if (index == 0)
		{
			difference.push_back(arr2[i]);
		}
	}

	return difference;
}
vector<int> symDifference(int arr1[], int m, int arr2[], int n, int* diffArray) {

	int temp, index = 0, count = 0;
	vector<int> symDiff1 = differenceAB(arr1, m, arr2, n, diffArray);
	vector<int> symDiff2 = differenceBA(arr1, m, arr2, n, diffArray);
	vector<int> symDifference;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			if (symDiff1[i] == symDiff2[j])
			{	
				temp = symDiff2[j];
				symDiff2[j] = symDiff2[n - 1 - count];
				symDiff2[n - 1 - count] = temp;
				count++;
			}
		}
		symDifference.push_back(symDiff1[i]);
	}
	for (int i = 0; i < n - count; i++)
	{
		symDifference.push_back(symDiff2[i]);
	}

	return symDifference;
}
void subnet(int arr1[], int m, int arr2[], int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i] == arr2[j])	
			{
				cout << endl;
				cout << "All elements in the first set are contained in the second set!" << endl;
				break;
			}
			else {
				cout << endl;
				cout << "Not all elements in the first set are contained in the second!" << endl;
			}
			break;
		}
		break;
	}
}

/********************SETS-PRESENTATION**********************/

void outputMerge() {

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
	cout << "Union AB: ";
	int* mergedArray = new int[m + n];
	int mergeCount = merge(arr1, m, arr2, n, mergedArray);
	for (int i = 0; i < mergeCount; i++)
	{
		cout << mergedArray[i] << " ";
	}
}
void outputSecton(){

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

	cout << "Input the elements of the first set: ";
	input(arr1, m);
	cout << "Input the elements of the second set: ";
	input(arr2, n);

	cout << endl;
	cout << "Symmetrical difference: ";

	int* diffArray{};
	vector<int> diffBACount = symDifference(arr1, m, arr2, n, diffArray);

	for (int i = 0; i < diffBACount.size(); i++)
	{
		cout << diffBACount[i] << " ";
	}
}
void outputSubnet() {

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

	subnet(arr1, m, arr2, n);

}