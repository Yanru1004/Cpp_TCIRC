//b040. 鐵軌道岔

#include <iostream>
#include <stack>


using namespace std;

//主程式
int main(){
    
    int n,m;
    bool check=true;

    //取得車廂數 及 詢問數
    cin >> n >> m;

    for (int i=0;i<m;i++){
        stack<int> tail_a,station;
        check = true;
        //建立A區鐵軌車廂
        for (int j=n-1;j>=0;j--){
            tail_a.push(j);           
        }
        //驗證詢問迴圈
        for (int k=0;k<n;k++){
            int ask; cin >> ask;
           
            if (!tail_a.empty() && tail_a.top() == ask){
                tail_a.pop(); //目標車廂在A鐵軌最前頭直接進B鐵軌
               
            }
            else if (!tail_a.empty() && tail_a.top() < ask){ //目標車廂還在A鐵軌中
               
                while(!tail_a.empty() && tail_a.top()<=ask){ //持續取出至車站，直到遇到目標車廂。
                    station.push(tail_a.top());
                    
                    tail_a.pop();
                }
                if (station.top() == ask){
                    
                    station.pop(); //從車站取出進B鐵軌
                }
            }
            else{ //目標車廂已取出
                
                if (station.top() == ask){
                    station.pop();
                }
                else {
                    check = false;
                   
                }
            }
        }
           
            if (check){
                cout << "Yes"<<'\n';
            }
            else{
                cout << "No"<<'\n';
            }
        }

        }   

    
