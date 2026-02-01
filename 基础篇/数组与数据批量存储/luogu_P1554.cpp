#include<iostream>
using namespace std;
int main(){
    int m,n,cnt,num;
    cin >> m >> n;
    int hash[10]={0};
    for(int i=m;i<=n;i++){
        num=i;
        while(num>0){
            cnt=num%10;
            num/=10;
            hash[cnt]++;
        }
    }
    for(int i=0;i<10;i++){
        cout << hash[i] << " ";
    }
    return 0;
}