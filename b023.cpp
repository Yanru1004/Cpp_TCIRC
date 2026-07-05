//b023. 十二生肖

#include <iostream>
#include <vector>

using namespace std;

//主程式
int main(){

    int year;
    vector<string> zodiac=
    {"Rat","Ox","Tiger","Hare","Dragon","Snake",
    "Horse","Sheep","Monkey","Rooster","Dog","Pig"};
    
    while (cin >> year){        
    
    cout << zodiac[(year+8)%12]<<endl; 
    }
}