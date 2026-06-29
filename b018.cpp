//b018. 可樂成癮患者

#include <iostream>

using namespace std;

//主程式
int main(){

int X,Y,result=0,cap=0;

cin >> X >> Y;

//喝光纖維可樂並換普通可樂
result += Y;
X += (Y/3);

result += X;
cap = X;

while (cap >= 5){
    result += cap/5;
    
    cap = (cap/5) + (cap%5);
}
cout << result;


}