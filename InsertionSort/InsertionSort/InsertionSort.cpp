// InsertionSort.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib> //for rand()
#include <iomanip> // for setw()

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = (rand() % 100) + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
	int key, j;
	for (int i = 1; i < size; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;

	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	system("pause");
    return 0;
}

