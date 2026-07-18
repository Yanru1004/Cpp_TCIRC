//b034. Arvin 拉麵店

#include <iostream>
#include <set>

using namespace std;

//主程式
int main(){

    multiset<int> work;
    string command;

    while (true){
        cin >> command;
        if (command == "END"){
            break;
        }
        else if (command == "INSERT"){
            int num;
            cin >> num;
            work.insert(num);
        }
        //取出大值
        else if (command == "POP_LARGE"){
            if (work.empty()){
                cout << "Nothing To Do :)" <<endl;
            }
            else {
                cout << *prev(work.end()) <<endl;
                work.erase(prev(work.end()));
            }
        }
        //取最小值
        else if (command == "POP_SMALL"){
            if (work.empty()){
                cout << "Nothing To Do :)" <<endl;
            }
            else {
                cout << *work.begin() <<endl;
                work.erase(work.begin());
            }
        }
        else{
            cout << "ERROR";
        }
    }

}



