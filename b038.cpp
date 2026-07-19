//b038. 存量問題

#include <iostream>
#include <vector>

using namespace std;

//主程式
int main(){
    
    int day,banana=0,k_banana=0;
    size_t king_day = 0;
    vector<int> tax = {1,1};

    cin >> day; //取得天數

    for (int t=1; t<=day; t++){
        banana += 80; //猴子採收
        
        //建立及確認稅收表
        if (tax.size() == king_day+1){  //建立及確認稅收表
            tax.push_back(tax[king_day-1] + tax[king_day]);
        }
        //cout <<"Day-"<< t << " King day: " << king_day+1  << " Tax: "<< tax[king_day]<< '\n';
        //革命判斷
        if (tax[king_day] < banana){
            //收稅
            banana -= tax[king_day];
            k_banana += (tax[king_day]*20);
            //cout << "King have " << k_banana << '\n';
            //cout << "Monkey have " << banana << '\n'; 
            //香蕉腐敗
            k_banana -= (k_banana/2);
            //cout << "banana bad  last " << k_banana << '\n';
             king_day += 1;
        }
        else{
            //發動革命
            int total_banana = (k_banana) + (banana *20);
            //cout << "Revolution" << '\n';
            //cout << "Total banana: " << total_banana << '\n';
            banana = (total_banana * 0.95)/20;
            k_banana = total_banana - (banana *20);
            //cout << "monkey get: " << banana << "  monkey king get:  " << k_banana << '\n'; 
            king_day = 0;
        }        
    
    }//for 迴圈尾端
    cout << banana;
}