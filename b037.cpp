//b037. 破譯密碼

#include <iostream>
#include <vector>

using namespace std;

//主程式
int main(){
    vector<int> freq(26,0);
    string s;
    
        getline(cin,s);
        
        for (char letter:s){ //字元拆解
            if (letter >= 'a' and letter <= 'z'){
                freq[letter - 'a']++;
            }
            else if (letter >= 'A' and letter <= 'Z'){
                freq[letter - 'A']++;
            }            
        }
    
    //輸出
    for (int num=0; num < 26; num++){
        if (freq[num] != 0){
            char a = num + 'a';
            cout << "\'" << a << "\': " << freq[num] <<endl;
        }
    }

}
