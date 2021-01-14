#include<iostream>
#include<string>
using namespace std;

//用于从键盘获取数据
//cin >> 变量

int main()
{

	//1、整型
	int a = 0;
	cout << "给a赋值：" << endl;
	cin >> a;
	cout << "整型变量a:" << a << endl;

	//2、浮点型
	float f = 3.14f;
	cout << "给f赋值:" << endl;
	cin >> f;
	cout << "浮点型f:" << f << endl;

	//3、字符型
	char ch = 'a';
	cout << "给ch赋值:" << endl;
	cin >> ch;
	cout << "字符型ch:" << ch << endl;

	//4、字符串
	char str1[] = "hello";
	string str = "Hello World";
	cout << "给str赋值：" << endl;
	cin >> str;
	cout << "字符串str:" << str << endl;

	//5、布尔型
	bool flag = false;
	cout << "给flag赋值：" << endl;
	cin >> flag;
	cout << "布尔型flag:" << flag << endl;

	system("pause");

	return 0;

}
