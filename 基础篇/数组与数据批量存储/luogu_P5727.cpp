#include<iostream>
using namespace std;
int main(){
    int n,index=0;
    cin >> n;
    int ans[101];
    for(int i=0;;i++){
        ans[i]=n;
        if(n==1){
            index=i;
            break;
        }
        else if(n%2){
            n=n*3+1;
        }
        else{
            n/=2;
        }
    }
    for(int i=index;i>=0;i--){
        cout << ans[i] << " ";
    }
    return 0;
}