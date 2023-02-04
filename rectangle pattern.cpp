#include <iostream>
using namespace std;

int main()
{
	int row, column;
	cin >> row >> column;

	for (int i = 1; i <= row; i++) {
		string str = "";
		for (int j = 1; j <= column; j++) {
			str += "*";

		}
		cout << str << endl;
	}
}
