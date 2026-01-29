#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,sum=0,num,up,low;
    double ans;
    cin >> n >> num;
    up=num;
    low=num;
    sum+=num;
    for(int i=1;i<n;i++){
        cin >> num;
        up=max(num,up);
        low=min(num,low);
        sum+=num;
    }
    ans=1.0*(sum-up-low)/(n-2);
    printf("%.2lf",ans);
    return 0;
}