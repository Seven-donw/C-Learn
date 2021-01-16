 #include<iostream>
 using namespace std;
//用于根据表达式的值返回真值（1）或假值（0）
/*
 运算符："!" 术语：非 结果：如果a为假，则!a为真;如果a为真，则!a为假
 运算符："&&" 术语：与 结果：如果a和b都为真，则结果为真，否则为假。
 运算符: "||" 术语：或 结果：如果a和b有一个为真，则结果为假；二者都为假时，结果为假
*/
int main() {

    // 逻辑运算符 非 "!"    "0"假 除了 "0"都为真
    int a = 10;
    cout << !a << endl;
    cout << !!a << endl;

    // 逻辑运算符 与 "&&"           同真为真，其余为假。
    int c = 10;
    int d = 10;
    cout << ( d && c ) << endl;
    c = 0;
    cout << ( c && d ) << endl;
    d = 0;
    cout << ( c && d ) << endl;

    // 逻辑运算符 或 "||"           同假为假，其余为真。
    int b = 10;
    cout << ( a || b ) << endl;
    a = 0;
    cout << ( a || b ) << endl;
    b = 0;
    cout << ( a || b ) << endl;


    system("pause");

    return 0;
    
}
