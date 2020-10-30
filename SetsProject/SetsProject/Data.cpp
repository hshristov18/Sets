#include <iostream>
#include "Data.h"

using namespace std;

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
			if (arr1[i] == arr2[2])
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

void outputMerge() {

	int m, n;
	cout << "Input the size of the first set: ";
	cin >> m;
	cout << "Input the size of the second set: ";
	cin >> n;

	int* arr1 = new int[m];
	int* arr2 = new int[n];

	cout << "Input the numbers of the first set: ";
	input(arr1, m);
	cout << "Input the numbers of the second set: ";
	input(arr2, n);

	cout << endl;
	cout << "Merge: ";
	int* mergedArray = new int[m + n];
	int mergeCount = merge(arr1, m, arr2, n, mergedArray);
	for (int i = 0; i < mergeCount; i++)
	{
		cout << mergedArray[i] << " ";
	}
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

void outputSecton() {

	int m, n;
	cout << "Input the size of the first set: ";
	cin >> m;
	cout << "Input the size of the second set: ";
	cin >> n;

	int* arr1 = new int[m];
	int* arr2 = new int[n];

	cout << "Input the numbers of the first set: ";
	input(arr1, m);
	cout << "Input the numbers of the second set: ";
	input(arr2, n);

	cout << endl << "Section: ";
	int* sectArray = new int[m];
	int sectCount = section(arr1, m, arr2, n, sectArray);
	for (int i = 0; i < sectCount; i++)
	{
		cout << sectArray[i] << " ";
	}
}

