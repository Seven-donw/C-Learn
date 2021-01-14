#include<iostream>
using namespace std;

//布尔数据类型代表真或假的值
//ture 代表真 值1
//false 代表假 值0
//占1个字节
int main4()
{

	bool flag = true;
	cout << flag << endl; //1

	flag = false;
	cout << flag << endl; //0

	cout << "布尔类型内存所占空间大小：" << sizeof(bool) << endl;

	system("pause");

	return 0;

}
