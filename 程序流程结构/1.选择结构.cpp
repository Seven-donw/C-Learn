#include<iostream>
using namespace std;
// 三种程序运行结构： 顺序结构、选择结构、循环结构
//1.顺序结构：程序按顺序执行，不发生跳转。
//2.选择结构：依据条件是否满足，有选择的执行相应功能。
//3.循环结构：依据条件是否满足，循环多次执行某段代码。

int main() {

    //1.单行格式if语句：  if(条件){条件满足执行的语句}
    //if() 后不要加;
    int score = 0;
    cout << "请输入：" << endl;
    cin >> score;

    cout << "分数：" << score << endl;
    if(score > 600) {
        cout << "恭喜" << endl;
    }

    //2.多行格式：if(条件) {条件} else {条件不能满足执行的语句}
    int point = 0;
    cout << "请输入:" << endl;
    cin >> point;
    
    //cout << "分数" << endl;

    if (point > 600) {
        cout << "恭喜" << endl;
    }
    else {
            cout << "可惜，下次继续努力" << endl;
    }

    //3.多条件格式语句 语法：if(条件1){条件1满足执行的语句}else if (条件2){满足条件2执行的语句}...else{都不满足执行的语句}
    /*
        >600分 考上一本
        >500分 考上二本
        >400分 考上三本
        <=400  未考上本科
    */
   int scores = 0;
   cout << "请输入：" << endl;
   cin >> scores;

   cout << "分数:" << endl;

   if (scores > 600) {
       cout << "考上一本" << endl;
   }
   else if (scores > 500) {
       cout << "考上二本" << endl;
   }
   else if (scores > 400) {
       cout << "考上三本" << endl;
   }
   else {
       cout << "没考上本科" << endl;
   }

    system("pause");

    return 0;

}
