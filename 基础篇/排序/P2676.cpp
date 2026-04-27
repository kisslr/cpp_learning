#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(const int&a,const int&b){
    return a>b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,b,temp=0;
    cin >> n >> b;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0;i<n;i++){
        temp+=arr[i];
        if(temp>=b){
            cout << i+1;
            break;
        }
    }
    return 0;
}