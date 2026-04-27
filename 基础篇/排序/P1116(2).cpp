#include<iostream>
#include<vector>
using namespace std;
void mergesort(vector<int>& arr,vector<int>& temp,int l,int r,long long& cnt){
    if(l>=r){
        return;
    }
    int mid=l+(r-l)/2;
    mergesort(arr,temp,l,mid,cnt);
    mergesort(arr,temp,mid+1,r,cnt);
    int i=l,j=mid+1,k=l;
    while(i<=mid&&j<=r){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            cnt+=mid-i+1;
        }
    }
    while(i<=mid)temp[k++]=arr[i++];
    while(j<=r)temp[k++]=arr[j++];
    for(int p=l;p<=r;p++){
        arr[p]=temp[p];
    }
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,cnt=0;
    long long ans=0;
    cin >> n;
    vector<int>arr(n,0),temp(n,0);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    mergesort(arr,temp,0,n-1,ans);
    cout << ans;
    return 0;
}