//b026. 乖乖寫作業

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//主程式
int main(){
        
    long long num;    
    
    cin >> num;

    vector<string> answer(num);

    for (int i=0;i<num;i++){
        cin >> answer[i];
    }

    reverse(answer.begin(),answer.end());
    
    for (string s:answer){
        cout << s << " ";
    }

    
}