#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cctype>
using namespace std;
int main(){
    int n,num1,num2,num3,len;
    char type;
    char s1[9],s2[9],ope[3]={'+','-','*'};
    string s3;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s1;
        if(isalpha(s1[0])){
            type=s1[0];
            cin >> s1 >> s2;
        }
        else{
            cin >> s2;
        }
        num1=atoi(s1);
        num2=atoi(s2);
        if(type=='a'){
           num3=num1+num2; 
        }
        else if(type=='b'){
            num3=num1-num2;
        }
        else{
            num3=num1*num2;
        }
        s3=to_string(num3);
        len=strlen(s1)+strlen(s2)+s3.size()+2;
        cout << num1 << ope[type-'a'] << num2 << '=' << num3 << endl << len << endl;
    }
    return 0;
}