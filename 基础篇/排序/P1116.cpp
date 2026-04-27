#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,cnt=0;
    cin >> n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        int index=0;
        while(arr[index]!=i+1){
            index++;
        }
        if(index==i){
            continue;
        }
        else if(i>index){
            for(int j=index;j<i;j++){
                swap(arr[j],arr[j+1]);
                cnt++;
            }
        }
        else{
            for(int j=index;j>i;j--){
                swap(arr[j],arr[j-1]);
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}