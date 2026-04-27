#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int k,len;
    cin >> s >> k;
    sort(s.begin(),s.end());
    len=s.size();
    s[len-k]='\0';
    s.erase(s.begin()+len-k+1,s.end());
    int index=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            index=i;
            break;
        }
    }
    if(index>0){
        s.erase(s.begin(),s.begin()+index);
    }
    if(s[0]=='\0'){
        cout << 0;
        return 0;
    }
    cout << s;
    return 0;
}