//b033. 晚餐ㄘ什麼？？

#include <iostream>
#include <set>

using namespace std;

//主程式
int main(){
    int n,m;
    set<string> dang,chung;
    string food;

    cin >> n >> m;

    for (int i=0;i<n;i++){
        cin >> food;
        dang.insert(food);

    }
    for(int i=0;i<m,i++){
        cin >> food;
        chung.insert(food);
    }
}