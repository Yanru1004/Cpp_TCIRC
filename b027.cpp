//b027. 找出學霸

#include <iostream>

using namespace std;

//主程式
int main(){

    int num,score,
        high_score=0  ,high_index=-1,
        low_score=100 ,low_index=-1;

    //取得學生人數
    cin >> num;

    for (int i=1;i<=num;i++){
        cin >> score;
        if (score > high_score){
            high_score = score;
            high_index = i;
        }
        if (score < low_score){
            low_score = score;
            low_index = i;
        }
    }
    
    cout << high_index << " " << high_score << " ";
    cout << low_index << " " << low_score;

}