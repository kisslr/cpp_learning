#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long num;
    int ans=0;
    cin >> num;
    while(num>0){
        num/=2;
        ans++;
    }
    cout << ans;
    return 0;
}