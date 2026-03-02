#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
struct student{
    string name;
    int chinese,math,english;
    int sum;
};
int cal(student a,student b){
    int is=1;
    if(abs(a.sum-b.sum)>10){
        is=0;
    }
    else if(abs(a.chinese-b.chinese)>5){
        is=0;
    }
    else if(abs(a.math-b.math)>5){
        is=0;
    }
    else if(abs(a.english-b.english)>5){
        is=0;
    }
    return is;
}
int main(){
    int n;
    cin >> n;
    vector<student> students(n);
    for(int i=0;i<n;i++){
        cin >> students[i].name >> students[i].chinese >> students[i].math >> students[i].english;
        students[i].sum=students[i].chinese+students[i].math+students[i].english;
    }
    sort(students.begin(),students.end(),[](const student& a,const student& b){
        return a.name<b.name;
    });
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(cal(students[i],students[j])){
                cout << students[i].name << " " << students[j].name << endl;
            }
        }
    }
    return 0;
}