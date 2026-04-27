#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
    int id;
    int ch;
    int math;
    int eng;
    int total;
};
int comp(const student&a,const student&b){
    if(a.total!=b.total){
        return a.total>b.total;
    }
    else{
        if(a.ch!=b.ch){
            return a.ch>b.ch;
        }
        else{
            return a.id<b.id;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<student>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i].ch >> arr[i].math >> arr[i].eng;
        arr[i].id=i+1;
        arr[i].total=arr[i].ch+arr[i].math+arr[i].eng;
    }
    sort(arr.begin(),arr.end(),comp);
    for(int i=0;i<5;i++){
        cout << arr[i].id << " " << arr[i].total;
        if(i<4){
            cout << '\n';
        }
    }
    return 0;
}