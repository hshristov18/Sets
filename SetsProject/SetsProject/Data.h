#pragma once
#include <iostream>
#include <vector>

using namespace std;

/********************DATA*******************/

void input(int arr[], int N);
int merge(int arr1[], int m, int arr2[], int n, int* mergedArray);
int section(int arr1[], int m, int arr2[], int n, int* sectArray);
vector<int> differenceAB(int arr1[], int m, int arr2[], int n, int* diffArray);
vector<int> differenceBA(int arr1[], int m, int arr2[], int n, int* diffArray);
vector<int> symDifference(int arr1[], int m, int arr2[], int n, int* diffArray);
void subnet(int arr1[], int m, int arr2[], int n);

/********************PRESENTATION*******************/
void outputMerge();
void outputSecton();
void outputDifferenceAB();
void outputDifferenceBA();
void outputSymDifference();
void outputSubnet();