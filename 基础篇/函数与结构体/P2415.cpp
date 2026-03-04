#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> s;
    int cnt;
    long long ans=0;
    while(cin >> cnt){
        s.push_back(cnt);
        ans+=cnt;
    }
    cout << ans*(2<<(s.size()-2));
    return 0;
}