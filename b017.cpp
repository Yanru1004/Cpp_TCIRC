//b017. 病毒的增生

#include <iostream>

using namespace std;

//主程式
int main(){

    int min,virus = 1;

    cin >> min;

    for (int i=1;i<=min;i++){
        virus *= 2;
    }
    cout << virus;
}