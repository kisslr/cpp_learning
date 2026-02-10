#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    char alpha[]={'a','b','c'};
    int value[3]={0,0,0};
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])&&s[i+1]!=';'){
            int cnt=-1;
            for(int j=0;j<3;j++){
                if(s[i]==alpha[j]){
                    cnt=j;
                    break;
                }
            }
            if(cnt>=0&&isdigit(s[i+3])){
                value[cnt]=s[i+3]-'0';
            }
            else if(cnt>=0&&isalpha(s[i+3])){
                int pos;
                for(int t=0;t<3;t++){
                    if(s[i+3]==alpha[t]){
                        pos=t;
                        break;
                    }
                }
                value[cnt]=value[pos];
            }
        }
    }
    for(int i=0;i<3;i++){
        cout << value[i] << " ";
    }
    return 0;
}