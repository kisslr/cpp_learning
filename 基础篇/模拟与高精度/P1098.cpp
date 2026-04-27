#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    int p1,p2,p3;
    int pos=0,comp,type;
    string s,temp;
    cin >> p1 >> p2 >> p3;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]!='-'){
            cout << s[i];
            continue;
        }
        if(i==s.size()-1||!i||(!isdigit(s[i+1])&&!isalpha(s[i+1]))||(!isdigit(s[i-1])&&!isalpha(s[i-1]))){
            cout << "-";
            continue;
        }
        else if(isdigit(s[i-1])!=isdigit(s[i+1])){
            cout << "-";
            continue;
        }
        comp=s[i+1]-s[i-1];
        if(comp<=0){
            cout << "-";
        }
        else if(comp==1){
            continue;
        }
        else{
            if(isdigit(s[i-1])){
                type=0;
                if(p1==3){
                    type=3;
                }
            }
            else{
                type=p1;
            }
            for(int k=1;k<comp;k++){
                for(int j=0;j<p2;j++){
                    if(type==1||!type){
                        temp+=s[i-1]+k;
                    }
                    else if(type==3){
                        temp+="*";
                    }
                    else if(isalpha(s[i-1])&&type==2){
                        temp+=s[i-1]+k-'a'+'A';
                    }
                }
            }
            if(p3==2){
                reverse(temp.begin(),temp.end());
            }
            cout << temp;
            temp.clear();
        }
    }
    return 0;
}