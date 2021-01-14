#include<iostream>
using namespace std;

/* 
 表示用于小数
 float（7为有效数字 单精度）
 double (15~16位有效数字 双精度)
 默认情况下 输出一个小数，会显示6为有效数字
*/
int main()
{
	float f1 = 3.1415926f;
	cout << "f1= " << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1= " << d1 << endl;

	// float & double 占用字节的统计 float占4个字节 double 占8个字节
	cout << "float占用的内存空间：" << sizeof(float) << endl;
	cout << "double占用的内存空间：" << sizeof(double) << endl;
	//科学计数法
	float f2 = 3e2;// 3*10^2；
	cout << "f2=" << f2 << endl;
	float f3 = 3e-2;//3*0.1^2;
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;

}
