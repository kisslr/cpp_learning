#include<iostream>
#include<string>
#include<vector>
using namespace std;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int main(){
    int m,n,ans;
    cin >> n >> m;
    vector<string> matrix(n);
    for(int i=0;i<n;i++){
        cin >> matrix[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans=0;
            if(matrix[i][j]=='*'){
                cout << "*";
                continue;
            }
            else{
                for(int k=0;k<8;k++){
                    int x=i+dx[k],y=j+dy[k];
                    if(x>=0&&x<n&&y>=0&&y<m&&matrix[x][y]=='*'){
                        ans++;
                    }
                }
                cout << ans;
            }
        }
        cout << endl;
    }
    return 0;
}