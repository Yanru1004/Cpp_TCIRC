//b005 電電的三角形

#include <iostream>

using namespace std;

//面積計算
int area(int b,int h){
       
    return (b * h)/2;
}

//主程式
int main(){

    //讀取測資
    int b,h;
    cin >> b >> h;

    cout << area(b,h);

}