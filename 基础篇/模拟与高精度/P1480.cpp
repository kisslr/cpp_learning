#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string a;
    long long b;
    cin >> a >> b;
    vector<int> a1(a.size(),0),ans(a.size(),0);
    for(int i=0;i<a1.size();i++){
        a1[i]=a[i]-'0';
    }
    long long t=0;
    for(int i=0;i<a1.size();i++){
        t=t*10+a1[i];
        if(t>=b){
            ans[i]=t/b;
            t=t%b;
        }
        else{
            ans[i]=0;
        }
    }
    int index=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]){
            index=i;
            break;
        }
    }
    if(index==0 && ans[0]==0){
        cout << 0;
        return 0;
    }
    for(int i=index;i<ans.size();i++){
        cout << ans[i];
    }
    return 0;
}