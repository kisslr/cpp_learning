#include<iostream>
using namespace std;
int main(){
    double s,ans=1;
    double cnt=2,acc=2;
    cin >> s;
    while(acc<s){
        cnt*=0.98;
        acc+=cnt;
        ans++;
    }
    cout << ans;
    return 0;
}