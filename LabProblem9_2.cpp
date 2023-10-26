/*
* File: LabProblem9_2.cpp
* 
* Author: Ethan Burch
* Date: 10/26/23
* Description: sorts arrays
*/

#include <iostream>
#include <ctime>

using namespace std;

bool isSortedIncreasing(int array[], int size);
bool isSortedDecreasing(int array[], int size);
bool hasAdjecentDuplicates(int array[], int size);


int main(void) {
	const int SIZE = 6;
	int numbers[SIZE];

	for (int i = 0; i < 6; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> numbers[i];
	}

	if (isSortedIncreasing(numbers, SIZE))
		cout << "The data are increasing\n";
	else
		cout << "The data are not increasing\n";
	if (isSortedDecreasing(numbers, SIZE))
		cout << "The data are decreasing\n";
	else
		cout << "The data are not decreasing\n";
	if (hasAdjecentDuplicates(numbers, SIZE))
		cout << "The data has adjacent duplicates\n";
	else
		cout << "The data does not have adjacent duplicates\n";
	return 0;
}

bool hasAdjecentDuplicates(int array[], int size) {
	for (int i = 1; i < size; i++) {
		if (array[i] == array[i - 1] || array[i] == array[i + 1])
			return true;
		else if (i == size - 1)
			break;
		else
			continue;
	}
	return false;
}

bool isSortedDecreasing(int array[], int size) {
	for (int i = size - 1; i >= 0; i--) {
		if (i == 0)
			break;
		else if (array[i] <= array[i - 1])
			continue;
		else
			return false;
	}
	return true;
}

bool isSortedIncreasing(int array[], int size) {
	for (int i = 0; i < size; i++) {
		if (i == size - 1)
			break;
		else if (array[i] <= array[i + 1]) 
			continue;
		else 
			return false;
	}
	return true;
}