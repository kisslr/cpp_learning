#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int sum=0,target;
    int num[13]={1,0,1,1,1,0,1,1,1,1,1,0,1};
    cin >> s;
    for(int i=0,j=1;i<12;i++){
        if(num[i]){
             sum+=(s[i]-'0')*j;
            j++;
        }
    }
    target=sum%11;
    if(s[s.size()-1]=='X'){
        s[s.size()-1]='0'+10;
    }
    if(s[s.size()-1]-'0'==target){
        cout << "Right";
    }
    else{
        s[s.size()-1]='0'+target;
        if(target==10){
            s[s.size()-1]='X';
        }
        cout << s;
    }
    return 0;
}