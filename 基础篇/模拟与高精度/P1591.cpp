#include<iostream>
#include<vector>
using namespace std;
int acc[1001][10002];//10000装的阶乘的长度，10001装是否计算出阶乘
void cal(int (&acc)[1001][10002],int temp,int n){
    if(temp==n){
        return;
    }
    int cnt=0,left=0,len=acc[temp][10000];
    for(int i=0;i<acc[temp][10000];i++){
        cnt=acc[temp][i]*(temp+1)+left;
        left=cnt/10;
        cnt%=10;
        acc[temp+1][i]=cnt;
    }
    while (left>0)
    {
        cnt=left%10;
        left/=10;
        acc[temp+1][len]=cnt;
        len++;
    }
    acc[temp+1][10000]=len,acc[temp+1][10001]=1;
    cal(acc,temp+1,n);
}
int main(){
    int n,temp,ans;
    cin >> n;
    acc[0][10001]=acc[1][10001]=acc[0][10000]=acc[1][10000]=acc[0][0]=acc[1][0]=1;
    vector<vector<int>> cnt(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin >> cnt[i][0] >> cnt[i][1];
    }
    for(int i=0;i<n;i++){
        ans=0;
        temp=cnt[i][0];
        while(!acc[temp][10001]){
            temp--;
        }
        cal(acc,temp,cnt[i][0]);
        for(int j=0;j<acc[cnt[i][0]][10000];j++){
            if(acc[cnt[i][0]][j]==cnt[i][1]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}