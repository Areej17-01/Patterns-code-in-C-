// inverted pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int row;
	cin >> row;
	for (int i = row; i >= 0; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";

		}
		cout << endl;
	}
}
