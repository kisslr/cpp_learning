#include<iostream>
using namespace std;
int main(){
    int ans[7],n;
    for(int i=0;i<7;i++){
        ans[i]=1;
    }
    cin >> n;
    char start[n][n],end[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> start[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> end[i][j];
        }
    }
    for(int i=0,ic=n-1;i<n&&ic>=0;i++,ic--){
        for(int j=0,jc=0;j<n&&jc<n;j++,jc++){
            if(end[i][j]!=start[jc][ic]){
                ans[0]=0;
            }
        }
    }
    if(ans[0]){
        cout << 1;
        return 0;
    }
    for(int i=0,ic=n-1;i<n&&ic>=0;i++,ic--){
        for(int j=0,jc=n-1;j<n&&jc>=0;j++,jc--){
            if(end[i][j]!=start[ic][jc]){
                ans[1]=0;
            }
        }
    }
    if(ans[1]){
        cout << 2;
        return 0;
    }
    for(int i=0,ic=0;i<n&&ic<n;i++,ic++){
        for(int j=0,jc=n-1;j<n&&jc>=0;j++,jc--){
            if(end[i][j]!=start[jc][ic]){
                ans[2]=0;
            }
        }
    }
    if(ans[2]){
        cout << 3;
        return 0;
    }
    for(int i=0,ic=0;i<n&&ic<n;i++,ic++){
        for(int j=0,jc=n-1;j<n&&jc>=0;j++,jc--){
            if(end[i][j]!=start[ic][jc]){
                ans[3]=0;
            }
        }
    }
    if(ans[3]){
        cout << 4;
        return 0;
    }
    for(int i=0,ic=n-1;i<n&&ic>=0;i++,ic--){
        for(int j=0,jc=n-1;j<n&&jc>=0;j++,jc--){
            if(end[i][j]!=start[jc][ic]){
                ans[4]=0;
            }
        }
    }
    for(int i=0,ic=n-1;i<n&&ic>=0;i++,ic--){
        for(int j=0,jc=0;j<n&&jc<n;j++,jc++){
            if(end[i][j]!=start[ic][jc]){
                ans[4]=0;
            }
        }
    }
    for(int i=0,ic=0;i<n&&ic<n;i++,ic++){
        for(int j=0,jc=0;j<n&&jc<n;j++,jc++){
            if(end[i][j]!=start[jc][ic]){
                ans[4]=0;
            }
        }
    }
    if(ans[4]){
        cout << 5;
        return 0;
    }
    for(int i=0,ic=0;i<n&&ic<n;i++,ic++){
        for(int j=0,jc=0;j<n&&jc<n;j++,jc++){
            if(end[i][j]!=start[ic][jc]){
                ans[5]=0;
            }
        }
    }
    if(ans[5]){
        cout << 6;
        return 0;
    }
    cout << 7;
    return 0;
}