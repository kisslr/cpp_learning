#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long n,k,is=0;
    long long ans1=0,ans2=0,temp;
    vector<long long>arr(n,0);
    cin >> n >> k;
    temp=k;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]<=temp){
            ans1++;
            ans2+=k*(n-i);
            temp+=k;
        }
        else{
            if(!is){
                is=1;
                ans2+=k*(n-i);
            }
            else{
                break;
            }
        }
    }
    cout << ans1 << " " << ans2;
    return  0;
}