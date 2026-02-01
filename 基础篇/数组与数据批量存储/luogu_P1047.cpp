#include<iostream>
using namespace std;
int main(){
    int l,m,ans=0,u,v;
    cin >> l >> m;
    int tree[l+1];
    for(int i=0;i<=l;i++){
        tree[i]=1;
    }
    for(int i=0;i<m;i++){
        cin >> u >> v;
        for(int j=u;j<=v;j++){
            if(tree[j]){
                tree[j]=0;
            }
        }
    }
    for(int i=0;i<=l;i++){
        if(tree[i]){
            ans++;
        }
    }
    cout << ans;
    return 0;
}