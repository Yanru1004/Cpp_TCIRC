//b029. 爺爺口袋的紙條

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//主程式
int main(){

    int n,k;
    cin >> n >> k;
    
    for (int i=0;i<n;i++){ //跑N組資料
        //初始化陣列
        vector<int> chung(k),dang(k);

        //讀取串串字條
        for (int j=0;j<k;j++){
            cin >> chung[j];
        }
        //排序
        sort(chung.begin(),chung.end());

        //讀取電電字條
        for (int j=0;j<k;j++){
            cin >> dang[j];
        }
        //排序
        sort(dang.begin(),dang.end());

        //計算乘積和並輸出
        int result = 0;
        for (int j=0;j<k;j++){
            result += (chung[j] * dang[j]);
        }
        
        cout << result << endl;

    }
    
}