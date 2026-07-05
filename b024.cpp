//024. 貪睡的鬧鐘

#include <iostream>
#include <iomanip>

using namespace std;

//時間輸出函式
void show_time(int time){
    cout << setw(2) << (time/60) << setw(2) << (time %60) << endl;
}

//主程式
int main(){

    int Start,End;

    cin >> Start >> End;

    cout << setfill('0');

    Start = (Start/100)*60 + (Start%100);
    End = (End/100)*60 + (End%100);

    //跨午夜判斷
    if (Start > End){
        while (Start < 1440){
            show_time(Start);            
            Start += 5;
        }
        Start %= 1440;
    }


    while (Start < End){
        show_time(Start);
        Start += 5;
    }

    show_time(End);

}