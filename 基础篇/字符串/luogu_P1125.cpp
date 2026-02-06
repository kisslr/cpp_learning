#include<iostream>
using namespace std;
int main(){
    int cnt[26]={0},maxn=0,minn=100,num,is,len=0;
    char str[101];
    cin >> str;
    for(int i=0;i<101&&str[i]!='\0';i++){
        len++;
        cnt[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]>0&&cnt[i]<minn){
            minn=cnt[i];
        }
        if(cnt[i]>maxn){
            maxn=cnt[i];
        }
    }
    if(maxn==len){
        minn=0;
    }
    is=(num=maxn-minn);
    if(is>2){
        for(int i=2;i*i<=num;i++){
            if(!(num%i)){
                is=0;
                break;
            }
        }
    }
    if(is>=2){ 
        cout << "Lucky Word";
    }
    else{
        is=0;
        cout << "No Answer";
    }
    cout << endl << is;
    return 0;
}