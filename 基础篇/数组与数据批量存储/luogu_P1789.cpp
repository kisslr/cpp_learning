#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int ans=0,n,m,k,x,y;
    cin >> n >> m >> k;
    int matrix[n][n];
    memset(matrix,0,sizeof(matrix));
    int px[]={0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};
    int py[]={-2,-1,-1,-1,0,0,0,0,0,1,1,1,2};
    for(int i=0;i<m;i++){
        cin >> x >> y;
        for(int j=0;j<13;j++){
            if((x-1+px[j]>=0)&&(x-1+px[j]<n)&&(y-1+py[j]>=0)&&(y-1+py[j]<n)&&(!(matrix[x-1+px[j]][y-1+py[j]]))){
                matrix[x-1+px[j]][y-1+py[j]]=1;
            }
        }
    }
    if(k>0){
        for(int i=0;i<k;i++){
            cin >> x >> y;
            for(int j=x-3;j<=x+1;j++){
                for(int t=y-3;t<=y+1;t++){
                    if(j>=0&&j<n&&t>=0&&t<n&&(!(matrix[j][t]))){
                        matrix[j][t]=1;
                    }
                }
            }
        }
    } 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]){
                ans++;
            }
        }
    }
    cout << n*n-ans;
    return 0;
}