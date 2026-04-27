#include<iostream>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,index=0;
    cin >> n;
    string s,stemp;
    for(int i=0;i<n;i++){
        cin >> stemp;
        if(s.size()<stemp.size()||(s.size()==stemp.size()&&s<stemp)){
            index=i+1;
            s=stemp;
        }
    }
    cout << index << '\n' << s;
    return 0;
}