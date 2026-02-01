#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int ans[n][n];
    memset(ans,0,sizeof(ans));
    for(int i=0;i<m;i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int x=x1-1;x<=x2-1;x++){
            for(int y=y1-1;y<=y2-1;y++){
                ans[x][y]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}