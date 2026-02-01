#include<iostream>
using namespace std;
int main(){
    int n,m,sum=0,min,num;
    cin >> n >> m;
    int cnt[n+1];
    cnt[0]=0;
    for(int i=0;i<n;i++){
        cin >> num;
        sum+=num;
        cnt[i+1]=sum;
    }
    min=sum;
    if(n>m){
        for(int i=1;i<=(n-m);i++){
            sum=cnt[i+m-1]-cnt[i-1];
            if(sum<min){
                min=sum;
            }
        }
    }
    cout << min;
    return 0;
}