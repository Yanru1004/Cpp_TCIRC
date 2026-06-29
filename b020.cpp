//b020 慎思湖的倒影

#include <iostream>

using namespace std;

int print_star(int n){
    for (int i =0;i<n;i++){
        cout << "*";
    }
    cout << endl;
    return 0;
}

//主程式
int main(){

    //讀入層數
    int L;
    cin >> L;

    for (int i=1;i<=L;i++){
        print_star(i);
    }

    for (int i=L;i>0;i--){
        print_star(i);
    }
}