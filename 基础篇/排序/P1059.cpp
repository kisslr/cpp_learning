#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m;
    cin >> m;
    vector<int>arr(m,0);
    for(int i=0;i<m;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    cout << arr.size() << endl;
    for(int i=0;i<arr.size();i++){
        cout << arr[i];
        if(i<arr.size()-1){
            cout << " ";
        }
    }
    return 0;
}