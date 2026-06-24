//b012. 不及格的危機

#include <iostream>

using namespace std;

//主程式
int main(){

    int X,Y,Z;

    cin >> X >> Y >> Z;

    if ((X*Y+Z)/(X+1) >= 60){
        cout << "PASS";        
    }
    else{
        cout << "FAIL";
    }
}