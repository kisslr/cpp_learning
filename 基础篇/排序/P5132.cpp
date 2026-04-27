#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
struct dot{
    int x,y,z;
};
bool cmp(const dot& a,const dot& b){
    return a.z<b.z;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    double ans=0;
    cin >> n;
    vector<dot>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i].x >> arr[i].y >> arr[i].z;
    }
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0;i<n-1;i++){
        ans+=sqrt(pow(arr[i+1].x-arr[i].x,2)+pow(arr[i+1].y-arr[i].y,2)+pow(arr[i+1].z-arr[i].z,2));
    }
    cout << fixed << setprecision(3) << ans;
    return 0;
}
