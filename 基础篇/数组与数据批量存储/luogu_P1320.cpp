#include<iostream>
#include<cmath>
using namespace std;
char matrix[40001];
int main(){
    int index=0,n,ans=1;
    while (cin>>matrix[index])
    {
        index++;
    }
    n=(int)sqrt(index);
    cout << n;
    if(matrix[0]=='1'){
        cout << ' ' << 0;
    }
    for(int i=1;i<index;i++){
        if(matrix[i]==matrix[i-1]){
            ans++;
        }
        else{
            cout << ' ' << ans;
            ans=1;
        }
    }
    cout << ' ' << ans;
    return 0;
}
