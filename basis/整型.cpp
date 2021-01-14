#include<iostream>
using namespace std;
/*
	整型: short(2)  int(4)  long(4)  long long(8)
	可以利用sizeof求出数据类型占用内存大小
	语法： sizeof(数据类型/变量)
*/
int main4()
{
	//1、短整型 short (-32768~32767) (-2^15~2^15-1)
	short number1 = 3276;
	
	//2、整型 int ()(-2^31~2^31-1)

	//3、长整型 long ()(-2^31~2^31-1)

	//4、长长整型 long long ()(-2^63~2^63-1);

	cout << "short占用的内存大小：" << sizeof(short) << endl;

	system("pause");

	return 0;
}
