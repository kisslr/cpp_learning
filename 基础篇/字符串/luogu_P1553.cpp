#include<iostream>
#include<string>
using namespace std;
int main(){
    string num;
    int pos;
    cin >> num;
    if(num.find('%')!=string::npos){
        if(num.size()==2&&num[0]=='0'){
            cout << 0 << '%';
            return 0;
        }
        for(int i=num.find('%')-1;i>=0;i--){
            if(num[i]!='0'){
                pos=i;
                break;
            }
        }
        for(int i=pos;i>=0;i--){
            cout << num[i];
        }
        cout << '%';
    }
    else if(num.find('.')!=string::npos){
        int cnt=num.find('.');
        int is=0;
        for(int i=0;i<cnt;i++){
            if(num[i]!='0'){
                is=1;
                break;
            }
        }
        if(is==0){
            cout << 0;
        }
        else{
            for(int i=cnt-1;i>=0;i--){
                if(num[i]!='0'){
                    pos=i;
                    break;
                }
            }
            for(int i=pos;i>=0;i--){
                cout << num[i];
            }
        }
        cout << '.';
        pos=-1;
        for(int i=cnt+1;i<num.size();i++){
            if(num[i]!='0'){
                pos=i;
                break;
            }
        }
        if(pos==-1){
            cout << 0;
        }
        else{
            for(int i=num.size()-1;i>=pos;i--){
                cout << num[i];
            }
        }
    }
    else if(num.find('/')!=string::npos){
        int cnt=num.find('/');
        int is=0;
        for(int i=0;i<cnt;i++){
            if(num[i]!='0'){
                is=1;
                break;
            }
        }
        if(is==0){
            cout << 0;
        }
        else{
            for(int i=cnt-1;i>=0;i--){
                if(num[i]!='0'){
                    pos=i;
                    break;
                }
            }
            for(int i=pos;i>=0;i--){
                cout << num[i];
            }
        }
        cout << '/';
        for(int i=num.size()-1;i>cnt;i--){
            if(num[i]!='0'){
                pos=i;
                break;
            }
        }
        for(int i=pos;i>cnt;i--){
            cout << num[i];
        }
    }
    else{
        if(num.size()==1&&num[0]=='0'){
            cout << 0;
            return 0;
        }
        int len=num.size();
        for(int i=len-1;i>=0;i--){
            if(num[i]!='0'){
                pos=i;
                break;
            }
        }
        for(int i=pos;i>=0;i--){
            cout << num[i];
        }
    }
    return 0;
}