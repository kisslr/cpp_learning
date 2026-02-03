#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int n,is=0,x=0,y=0;
    cin >> n;
    int ans[n][n];
    int xc[4]={0,1,0,-1},yc[4]={1,0,-1,0};
    memset(ans,0,sizeof(ans));
    for(int i=1;i<=(n*n);i++){
        ans[x][y]=i;
        if((x+xc[is]==n)||(y+yc[is]==n)||(ans[x+xc[is]][y+yc[is]]!=0)){
            is++;
            is%=4;
        }
        x+=xc[is];
        y+=yc[is];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%3d",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}