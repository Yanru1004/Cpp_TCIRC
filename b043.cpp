//b043. Queue 模板題

#include <iostream>
#include <queue>

using namespace std;

//主程式
int main(){
    int num;
    string command;
    queue<int> tube;

    cin >> num;

    for (int i=0; i<num; i++){
        cin >> command;
        if (command == "PUSH"){
            int n;
            cin >> n;
            tube.push(n);
        }
        else{
            if (!tube.empty()){
                cout << tube.front()<<'\n';
                tube.pop();
            }
        }
    }
    
}