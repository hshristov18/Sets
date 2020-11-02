#include <iostream>
#include "Data.h"
#include <vector>

using namespace std;

/*******************************SETS-DATA***********************************/

void input(int arr[], int N)//function for inputting the elements of the sets
{
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}
int merge(int arr1[], int m, int arr2[], int n, int* mergedArray)//function that finds the merges of 2 sets
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
int section(int arr1[], int m, int arr2[], int n, int* sectArray)//function that finds the section of 2 sets
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
vector<int> differenceAB(int arr1[], int m, int arr2[],int n, int* diffArray)//function that finds the difference between A and B
{

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
vector<int> differenceBA(int arr1[], int m, int arr2[], int n, int* diffArray) //function that finds the difference between B and A
{


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
vector<int> symDifference(int arr1[], int m, int arr2[], int n, int* diffArray) //function that finds the symmetrical difference between A and B
{

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
void subnet(int arr1[], int m, int arr2[], int n) //function that finds the elements which are contained in both sets

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