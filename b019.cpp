//b019. 寶可夢道館

#include <iostream>

using namespace std;

//主程式
int main(){

    //匯入測資
    //H:總血量 M:傷害量 N:回復量

    int H,M,N;

    cin >> H >> M >> N;

    if (H > M and N > M){ //回復量超過傷害
        cout << "lose";
    }
    else{
        int round = 1;
        H -= M; //遭受攻擊
        while (H>0) {
            H += N; //回復
            round += 1; //進入下一回合
            H -= M; //遭受攻擊
        }
        cout << round;
    }

}
