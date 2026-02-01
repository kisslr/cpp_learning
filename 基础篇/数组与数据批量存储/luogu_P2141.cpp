#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,ans=0;
    cin >> n;
    int num[n],sum[n][n],cnt[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    memset(sum,0,sizeof(sum));
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum[i][j]=num[i]+num[j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int is=0;
            for(int k=0;k<n;k++){
                if(k!=i&&k!=j&&(sum[i][j]==num[k])&&(cnt[k]==0)){
                    is=1;
                    cnt[k]=1;
                    break;
                }
            }
            if(is){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}