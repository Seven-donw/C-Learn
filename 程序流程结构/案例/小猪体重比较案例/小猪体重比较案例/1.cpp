#include<iostream>
using namespace std;

int main() {

	int a = 0;
	cout << "请输入a(kg):" << endl;
	cin >> a;

	int b = 0;
	cout << "请输入b(kg):" << endl;
	cin >> b;

	int c = 0;
	cout << "请输入c(kg):" << endl;
	cin >> c;
	if (a > b) {
		if (a > c) {
			cout << " a 最重" << endl;
		}
		else if (a < b) {
			cout << "b 最重" << endl;
		}
	}
	else if (a < b) {
		if (b > c) {
			cout << "b 最重" << endl;
		}
		else if (c > b) {
			cout << "c 最重" << endl;
		}
	}
	system("pause");

	return 0;

}