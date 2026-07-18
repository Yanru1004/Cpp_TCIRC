//b033. 晚餐ㄘ什麼？？

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

//主程式
int main(){
    int n,m;
    set<string> dang,chung,result;
    string food;

    cin >> n >> m;
    
    for(int i=0;i<n;i++){
        cin >> food;
        dang.insert(food);
    }

    for (int i=0;i<m;i++){
        cin >> food;
        chung.insert(food);
    }

    //取交集
    set_intersection(dang.begin(),dang.end(),
                     chung.begin(),chung.end(),
                     inserter(result,result.end()));


    //輸出
    cout << result.size();

    for (string s:result){
        cout << endl << s;
    }

}