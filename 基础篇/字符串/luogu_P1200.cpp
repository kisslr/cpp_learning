#include<iostream>
#include<string>
using namespace std;
int main(){
    string group,ride;
    int num1=1,num2=1;
    cin >> ride >> group;
    for(int i=0;i<ride.size();i++){
        num1*=ride[i]-'A'+1;
    }
    for(int i=0;i<group.size();i++){
        num2*=group[i]-'A'+1;
    }
    if((num1%47)==(num2%47)){
        cout << "GO";
    }
    else{
        cout << "STAY";
    }
    return 0;
}