#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    stringstream ss;
    string s;
    int ans=0;
    for(int i=1;i<=n;i++){
        ss << i;
    }
    s = ss.str();
    for(int i=0;i<s.size();i++){
        if(s[i]==(x+'0')){
            ans++;
        }
    }
    cout << ans;
    return 0;
}