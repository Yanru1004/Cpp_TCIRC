//b041. 括弧配對

#include <iostream>
#include <stack>

using namespace std;

//主程式
int main(){

    stack<char> box;
    string s;

    cin >> s;
    bool check = true;
    for (char c:s){
        
        switch(c){
            //左括號系列，推入stack
            case '(':
            case '[':
            case '{':
            case '<':{
                box.push(c);
                break;
            }
            //右括號-小
            case ')':{
                if (!box.empty() && box.top() == '('){
                    box.pop();
                }
                else{
                    check = false;
                }
                    break;
            }
            //右括號-中
            case ']':{
                if (!box.empty() && box.top() == '['){
                    box.pop();
                }
                else{
                    check = false;
                }
                    break;
            }
            //右括號-大
            case '}':{
                if (!box.empty() && box.top() == '{'){
                    box.pop();
                }
                else{
                    check = false;
                }
                    break;
            }
            //右括號-角
            case '>':{
                if (!box.empty() && box.top() == '<'){
                    box.pop();
                }
                else{
                    check = false;
                }
                    break;
            }
            }//switch 末端
            if (check == false){
                break;
            }
                }//for 迴圈

            if (box.empty() && check){
                cout << 'T'<<'\n';
            }
            else{
                cout << 'F'<<'\n';
            }
    }
    
    


