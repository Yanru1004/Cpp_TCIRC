//b039. Stack 模板題

#include <iostream>
#include <stack>

using namespace std;

//主程式
int main(){
    int n,num;
    stack<int> st;
    string command;

    cin >> n;

    for (int i=0;i<n;i++){
        cin >> command;
        if (command == "PUSH"){
            cin >> num;
            st.push(num);
        }
        else if (command == "POP"){
            cout << st.top()<<endl;
            st.pop();
        }          
        else {
            cout << "Error";
        }        
    }
}