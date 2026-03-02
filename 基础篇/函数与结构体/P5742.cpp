#include<iostream>
#include<vector>
using namespace std;
struct students{
    int id;
    int learn,extra;
}student;
int cal(students a){
    int is=1;
    if(a.learn+a.extra<=140||(a.learn*7+a.extra*3)<800){
        is=0;
    }
    return is;
}
int main(){
    int n;
    cin >> n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin >> student.id >> student.learn >> student.extra;
        ans[i]=cal(student);
    }
    for(int i=0;i<n;i++){
        if(ans[i]){
            cout << "Excellent" << endl;
        }
        else{
            cout << "Not excellent" << endl;
        }
    }
    return 0;
}