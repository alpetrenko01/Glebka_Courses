// Notation.cpp: определяет точку входа для консольного приложения.
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
	int notNum, number, k = 0;
	cout << "Enter notation " << endl;
	cin >> notNum;
	cout << "Enter number " << endl;
	cin >> number;
	int * arr = new int[number];
	if (notNum >= 2 && notNum <= 9) {
		while (number > 0) {
			arr[k++] = number % notNum;
			number /= notNum;
		}
		for (int i = k - 1; i >= 0; i--) {
			cout << arr[i] << " ";
		}
	}
	else {
		cout << "You should've entered notation less then 10 " << endl;
	}
	system("pause");
	delete[] arr;
    return 0;
}

