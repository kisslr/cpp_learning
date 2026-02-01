#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin >> n;
    int prize[7],ans[8];
    memset(ans,0,sizeof(ans));
    for(int i=0;i<7;i++){
        cin >> prize[i];
    }
    for(int i=0;i<n;i++){
        int cnt=0,num;
        for(int j=0;j<7;j++){
            cin >> num;
            for(int k=0;k<7;k++){
                if(prize[k]==num){
                    cnt++;
                    break;
                }
            }
        }
        ans[7-cnt]++;
    }
    for(int i=0;i<7;i++){
        cout << ans[i] << " ";
    }
    return 0;
}