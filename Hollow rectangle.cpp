// Hollow rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int row, column;
	cin >> row >> column;

	for (int i = 1; i <= row; i++) {
		string str = "";
		if (i == 1 or i == row) {
			for (int j = 1; j <= column; j++) {
				str += "*";

			}
			cout << str << endl;
		}
		else {
			for (int j = 1; j <= column; j++) {
				if (j == 1 or j == column) {
					cout << "*";

				}
				else {
					cout << " ";
				}

			}
			cout << endl;
		}
	}
}