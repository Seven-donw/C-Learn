#include<iostream>
using namespace std;

int main() {

    //复制运算符

    //等号 "="
    int a = 10;
    cout << "a=" >> a << endl;
    a=100;
    cout << "a=" << a << endl;

    //加等于 "+="
    int b = 0;
    b=10;
    b += 5; // a = a + 5
    cout << "b=" << b << endl;

    //减等于 "-="
    int c = 500;
    c=10;
    c -= 2; // c= c- 2
    cout << "c=" << c << endl;

    //乘等于 "*="
    int d = 10;
    d *= 2; // d= d * 2
    cout << "d=" << d << endl;

    //除等于 "/="
    int e = 10;
    e /= 2; // e = e / 2
    cout << "e=" << e << endl;

    //模等于 "%="
    int f = 10;
    e %= 2; // e = e % 2
    cout << "e=" << e << endl;

    system("pause");

    return 0;

}
