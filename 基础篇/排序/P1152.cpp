#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    bool is=true;
    cin >> n;
    vector<int> arr(n),ans(n,0);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(arr.size()==1){
        cout << "Jolly";
        return 0;
    }
    for(int i=0;i<n-1;i++){
        int diff = abs(arr[i] - arr[i+1]);
        if(diff >= n || diff < 1) {
            is = false;
            break;
        }
        ans[diff]++;
    }
    if(is){
        for(int i=1;i<n;i++){
            if(!ans[i]){
                is=false;
                break;
            }
        }
    }
    if(is){
        cout << "Jolly";
    }
    else{
        cout << "Not jolly";
    }
    return 0;
}