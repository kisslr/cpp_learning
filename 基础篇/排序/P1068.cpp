#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct participant
{
    int id;
    int grade;
};
bool cmp(const participant& a,const participant& b){
    if(a.grade==b.grade){
        return a.id<b.id;
    }
    return a.grade>b.grade;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,cnt,tmp=0;
    cin >> n >> m;
    m=m*3/2;
    vector<participant>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i].id >> arr[i].grade;
    }
    sort(arr.begin(),arr.end(),cmp);
    cnt=arr[m-1].grade;
    cout << cnt << " ";
    for(int i=0;i<n;i++){
        if(arr[i].grade>=cnt){
            tmp++;
        }
    }
    cout << tmp << '\n';
    for(int i=0;i<tmp;i++){
        cout << arr[i].id << " " << arr[i].grade;
        if(i<tmp-1){
            cout << '\n';
        }
    }
    return 0;
}