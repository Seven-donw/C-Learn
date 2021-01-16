#include<iostream>
using namespace std;
// 三种程序运行结构： 顺序结构、选择结构、循环结构
//1.顺序结构：程序按顺序执行，不发生跳转。
//2.选择结构：依据条件是否满足，有选择的执行相应功能。
//3.循环结构：依据条件是否满足，循环多次执行某段代码。

int main() {

    //1.单行格式if语句：  if(条件){条件满足执行的语句}
    int score = 0;
    cout << "请输入：" << endl;
    cin >> score;

    cout << "分数：" << score << endl;
    if(score > 600) {
        cout << "恭喜" << endl;
    }

    system("pause");

    return 0;

}
