//b002. 誰比較長？（一）

#include <iostream>
#include <string>

using namespace std;

//主程式
int main(){

    //讀取測資
    string msg_1,msg_2;
    cin >> msg_1 >> msg_2;

    //比較長度並輸出
    //第一句比較長
    if (msg_1.size() > msg_2.size()){
        cout << "chuang";
    }
    //第二句比較長
    else if (msg_2.size() > msg_1.size()){
        cout << "diang";
    }
    //兩句一樣長
    else{
        cout << "same";
    }

}