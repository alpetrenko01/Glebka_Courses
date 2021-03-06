// SelectionSort.cpp: определяет точку входа для консольного приложения.
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
	int smallest;
	int array[size];
	int change;
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100;
		cout << array[i] << "  ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		smallest = i;
		for (int j = i + 1; j < size; j++) {
			if (array[j] < array[smallest]) { smallest = j; }
		}
		change = array[i];
		array[i] = array[smallest];
		array[smallest] = change;
	}
	for (int i = 0; i < size; i++) {
		cout << array[i] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}
