//b030. 健康檢查（Ⅰ）

#include <iostream>
#include <vector>

using namespace std;

void output(vector<char> result){
    for (char s:result){
        cout << s << " ";
    }
}

//主程式
int main(){

    vector<char> pass,ng;
    char s;

    //讀取資料
    while (cin >> s){
        if (s == '*'){
            break;
        }
        else if (s >= '0' and s <='9'){
            pass.push_back(s);
        }
        else if (s >= 'a' and s<='z'){
            ng.push_back(s);
        }
    }
    
    //判斷
    if (pass.size() >= ng.size()){
        output(pass);
    }
    else {
        output(ng);
    }
    
}
