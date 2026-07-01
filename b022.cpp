//b022. 質數惡夢

#include<iostream>
#include<vector>

using namespace std;

//主程式
int main(){

    int M;
    cin >> M;

    vector<char> check(M+1,true);

    //去掉0和1
    check[0] = false;
    check[1] = false;

    //篩掉偶數
    for (int i=4;i<=M;i+=2){        
        check[i] = false;
    }
    //篩掉合數
    for (int i=3;i*i<M;i+=2){
        //跳過非已確認非質數
        if (check[i] == false){
            continue;
        }
        for(int j=i*i;j<M;j+=(2*i)){
            
            check[j] = false;
        }
    }
    if (M >2){
        cout << 2;
    }

    
    for(int n=3;n<M;n++){
        if (check[n] == true){
            cout << " " <<n;
        }
    }
    
}