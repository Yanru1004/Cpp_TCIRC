//b013. 閏年問題

#include <iostream>

using namespace std;

//主程式
int main(){

    int year;

    cin >> year;

    if ((year %4 == 0 and year %100 != 0) or (year%400 ==0)){
        cout << "閏年";
    }
    else{
        cout << "平年";
    }

}