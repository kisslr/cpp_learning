#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double num,ans=0;
    int temp;
    cin >> num;
    num*=10;
    for(int i=0;i<4;i++){
        temp=(int)num%10;
        num/=10;
        ans+=pow(0.1,i)*temp;
    }
    cout << ans;
    return 0;
}