#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int N;
    cin >> N;
    int ans[N][N],cnt[2][N*N];
    memset(ans,0,sizeof(ans));
    ans[0][(N-1)/2]=1;
    cnt[0][0]=0;//cnt[0][k-1]是k的行，cnt[1][k-1]是k的列
    cnt[1][0]=(N-1)/2;
    for(int i=2;i<N*N+1;i++){
        if((cnt[0][i-2]==0)&&(cnt[1][i-2]!=N-1)){
            cnt[0][i-1]=N-1;
            cnt[1][i-1]=cnt[1][i-2]+1;
            ans[cnt[0][i-1]][cnt[1][i-1]]=i;
        }
        else if((cnt[1][i-2]==N-1)&&(cnt[0][i-2]!=0)){
            cnt[1][i-1]=0;
            cnt[0][i-1]=cnt[0][i-2]-1;
            ans[cnt[0][i-1]][cnt[1][i-1]]=i;
        }
        else if((cnt[1][i-2]==N-1)&&(cnt[0][i-2]==0)){
            cnt[1][i-1]=cnt[1][i-2];
            cnt[0][i-1]=cnt[0][i-2]+1;
            ans[cnt[0][i-1]][cnt[1][i-1]]=i;
        }
        else if((cnt[1][i-2]!=N-1)&&(cnt[0][i-2]!=0)){
            if(ans[cnt[0][i-2]-1][cnt[1][i-2]+1]==0){
                cnt[1][i-1]=cnt[1][i-2]+1;
                cnt[0][i-1]=cnt[0][i-2]-1;
                ans[cnt[0][i-1]][cnt[1][i-1]]=i;
            }
            else{
                cnt[1][i-1]=cnt[1][i-2];
                cnt[0][i-1]=cnt[0][i-2]+1;
                ans[cnt[0][i-1]][cnt[1][i-1]]=i;
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}