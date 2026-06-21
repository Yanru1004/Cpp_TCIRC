//b001. 電電強迫症

#include <iostream>

using namespace std;

//主程式
int main(){

    //讀入兩數
    int a,b,temp=0;

    cin >> a >> b;
    
    //輾轉相除法
    while (b != 0){
        temp = b;
        b = a % b;
        a = temp;

    }
    
    cout << a;

}