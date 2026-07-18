//b035. 電皇的資源回收場

#include<iostream>
#include<vector>

using namespace std;

//主程式
int main(){

    int num,value,result=0;
    vector<int> goods;

    cin >> num; //讀取物品數
    
    for (int i=0;i<num;i++){
        int n;
        cin >> n;
        goods.push_back(n);
    }

    //取得目標價值
    cin >> value;

    for (int a=0; a<num-1; a++){
        for (int b=a+1; b<num; b++){
            if (goods[a] + goods[b] == value){
                result += 1;
            }
        }
    }
    cout << result;

}