//b014. 串串的三角形

#include <iostream>

using namespace std;

//主程式

int main(){

    int a,b,c;

    cin >> a >> b >> c;

    if (a+b <= c){
        cout << "NULL";
    }
    else if(a*a + b*b == c*c){
        cout << "Right Triangle";
    }
    else if(a*a + b*b > c*c){
        cout << "Acute Triangle";
    }
    else if(a*a + b*b < c*c){
        cout << "Obtuse Triangle";
    }
    else{
        cout << "Error";
    }
}