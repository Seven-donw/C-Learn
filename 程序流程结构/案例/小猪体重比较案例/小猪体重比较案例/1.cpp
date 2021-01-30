#include<iostream>
using namespace std;

int main() {

	int a = 0;
	cout << "Please Enter(kg):" << endl;
	cin >> a;

	int b = 0;
	cout << "Please Enter(kg):" << endl;
	cin >> b;

	int c = 0;
	cout << "Please Enter(kg):" << endl;
	cin >> c;
	if (a > b) {
		if (a > c) {
			cout << " a weighs the heaviest" << endl;
		}
		else if (a < b) {
			cout << "b weighs the heaviest" << endl;
		}
	}
	else if (a < b) {
		if (b > c) {
			cout << "b weighs the heaviest" << endl;
		}
		else if (c > b) {
			cout << "c weighs the heaviest" << endl;
		}
	}
	system("pause");

	return 0;

}
