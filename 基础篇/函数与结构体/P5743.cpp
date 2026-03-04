#include<iostream>
using namespace std;
int ans(int cnt,int n){
    if(n==1){
        return cnt;
    }
    return ans((cnt+1)*2,n-1);
}
int main(){
    int n;
    cin >> n;
    cout << ans(1,n);
    return 0;
}