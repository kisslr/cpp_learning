#include<iostream>
using namespace std;
int main(){
    int n,is=0,num,index=0,sum=0;
    cin >> n;
    int cnt[n*n],ans[n][n];
    for(;sum<n*n;){
        cin >> num;
        sum+=num;
        for(int j=0;j<num;j++){
            cnt[index++]=is;
        }
        is=(is+1)%2;
    }
    index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=cnt[index++];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}