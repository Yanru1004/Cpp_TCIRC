//b015. 數字的顏色

#include <iostream>

using namespace std;

//主程式
int main(){

    int num;
    string color = "White";

    cin >> num;

    //2的倍數 塗紅色
    if (num % 2==0){
        color = "Red";
    }

    //3的倍數 塗黃色
    if (num % 3==0){
        if (color == "Red"){
            color = "Orange";
        }
        else{
            color = "Yellow";
        }    
    }

    //5的倍數 塗黑色
    if (num % 5==0){
        color = "Black";
    }

    //7的倍數 塗藍色
    if (num % 7==0){
        if (color =="Red"){
            color = "Purple";
        }
        else if (color == "Yellow"){
            color = "Green";
        }
        else if (color == "White"){
            color = "Blue";
        }
        else{
            color = "Black";
        }
    }
    cout << color;
}