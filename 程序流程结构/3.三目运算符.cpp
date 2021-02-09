#include<iostream>
using namespace std;

int main() {

    //三目运算符
    /*
        表达式1 ? 表达式2 : 表达式3
        解释:
            如果表达式1的值为真，执行表达式2，并返回表达式2的结果
            如果表达式1的值为假，执行表达式3，并返回表达式3的结果
    */

   int a = 10;
   int b = 20;
   int c = 0;

   c = ( a > b ? a : b );
   cout << "c =" << c << endl;

   // using 'if'

   if (a > b) {
       c = a;
       cout << "c =" << c << endl;
   }
   else {
       c = b;
       cout << "b =" << c << endl;
   }

   (a > b ? a : b) = 100; // 如果a>b 返回10，如果a<b 返回20
   cout << "a =" << a << endl;
   cout << "b =" << b << endl;

   ( a < b ? a :b) =100;

    system("pause")

    return 0;
}
