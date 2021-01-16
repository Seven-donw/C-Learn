#include<iostream>
using namespace std;

int main() {

    int score = 0;
    cout << "请输入:" << endl;
    cin >> score;

    cout << "分数：" << endl;

    if (score > 600) {
        if (score >700 ) {
            cout << "考上北大" << endl;
        }
        else if (score > 650) {
            cout << "考上清华" << endl;
        }
        else {
            cout << "考上人大" << endl;
        }
    }
    else if (score > 500) {
        cout << "考上二本" << endl;
    }
    else if (score > 400) {
        cout << "考上三本" << endl;
    }
    else {
        cout << "未考上本科" << endl;
    }

    system("pause");

    return 0;

}
