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
	return 0;
}

bool isSortedIncreasing(int array[], int size) {
	for (int i = 0; i < size; i++) {
		if (i == size - 1)
			break;
		else if (array[i] < array[i + 1]) 
			continue;
		else 
			return false;
	}
	return true;
}