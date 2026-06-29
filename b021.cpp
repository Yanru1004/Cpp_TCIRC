//b021. 電電找因數

#include <iostream>

using namespace std;

//主程式
int main(){

    int num;    
    cin >> num;

    for (int i=1;i<num;i++){
        if (num % i ==0){
            cout << i << " ";            
        }
    }
    cout << num;
}