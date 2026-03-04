#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n,m,index=0,tcnt,ncnt;
    cin >> n >> m;
    vector<int>type(n);
    vector<string>name(n);
    for(int i=0;i<n;i++){
        cin >> type[i] >> name[i];
    }
    for(int i=0;i<m;i++){
        cin >> tcnt >> ncnt;
        if(type[index]==tcnt){
            index=(index+n-ncnt)%n;
        }
        else{
            index=(index+ncnt)%n;
        }
    }
    cout << name[index];
    return 0;
}