//b036. 物種豐富度

#include <iostream>
#include <set>

using namespace std;

//主程式
int main(){

    set<string> area_a,area_b;
    string a;

    //蒐集地區A物種
    while (getline(cin,a)){
        if (a == "0"){
            break;
        }
        else {
            area_a.insert(a);
        }
    }
    while (getline(cin,a)){
        if (a == "0"){
            break;
        }
        else {
            area_b.insert(a);
        }
    }

    if (area_a.size() > area_b.size()){
        cout << "A";
    }
    else if (area_a.size() < area_b.size()){
        cout << "B";
    }
    else {
        cout << "Equal";
    }

}