#include<iostream>
using namespace std;

int main() {

	int a = 0;
	cout << "������a(kg):" << endl;
	cin >> a;

	int b = 0;
	cout << "������b(kg):" << endl;
	cin >> b;

	int c = 0;
	cout << "������c(kg):" << endl;
	cin >> c;
	if (a > b) {
		if (a > c) {
			cout << " a ����" << endl;
		}
		else if (a < b) {
			cout << "b ����" << endl;
		}
	}
	else if (a < b) {
		if (b > c) {
			cout << "b ����" << endl;
		}
		else if (c > b) {
			cout << "c ����" << endl;
		}
	}
	system("pause");

	return 0;

}