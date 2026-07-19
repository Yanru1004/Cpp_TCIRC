//b038. 存量問題

#include <iostream>
#include <vector>

using namespace std;

//主程式
int main(){
    
    int day,king_day=0,banana=0,k_banana=0;
    vector<int> tax = {1,1};

    cin >> day; //取得天數

    for (int t=1; t<=day; t++){
        banana += 80; //猴子採收
        
        //建立及確認稅收表
        if (tax.size() == king_day+1){  //建立及確認稅收表
            tax.push_back(tax[king_day-1] + tax[king_day]);
        }
        cout <<"Day-"<< king_day+1  << " Tax: "<< tax[king_day]<< '\n';
        //革命判斷
        if (tax[king_day] < banana){
            //收稅
            banana -= tax[king_day];
            k_banana += (tax[king_day]*20);
            cout << k_banana << '\n';
            //香蕉腐敗
            k_banana -= (k_banana/2);           
        }
        else{
            //發動革命
            cout << "Revolution" << '\n';
            break;
        } 
    
    cout << "bad "<<k_banana << '\n';
     king_day += 1;
    }//for 迴圈尾端
    cout << k_banana;
}