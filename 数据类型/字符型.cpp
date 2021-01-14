#include<iostream>
using namespace std;
//字符型变量用于显示单个字符
//语法char ch = 'a'; 
//c和c++中字符型变量只占1个字节
//字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元
int main()
{
	char ch = 'a';//创建方式
	cout << ch << endl;
	cout << "ch所占的内存:" << sizeof(ch) << endl; //所占内存大小

	//char ch2 = "b"; 创建字符型变量是要用单引号（''）
	//char ch3 = 'abc'; 创建字符型变量 单引号内只用有一个字符

	//对应的ASCII的值
	cout << (int)ch << endl; // a-97 A-65

	system("pause");

	return 0;

}
