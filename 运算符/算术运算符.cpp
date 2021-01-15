#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    cout << "a+b=" << a+b << endl;
    cout << "a-b=" << a-b << endl;
    cout << "a*b=" << a*b << endl;
    cout << "a/b=" << a/b << endl; //整数除法输出整数
    /*
        0不能作除数 否程序出错
    */
    double d1 = 0.54;
    double d2 = 0.25;
    cout << "d1/d2" << d1/d2 << endl;


    system("pause")

    return 0;

}
