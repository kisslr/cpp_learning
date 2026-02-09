#include<iostream>
#include<string>
#include<cctype>
using namespace std;
string str[27]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","a","both","another","first","second","third"};
int main(){
    int cnt[27]={0},value[27]={0},pos=-1,is=1;
    string cal[27];//运算后的字符串
    string s,ans;
    for(int i=0;i<=20;i++){
        value[i]=i;
    }
    value[21]=value[23]=value[24]=1;
    value[22]=value[25]=2;
    value[26]=3;
    for(int i=0;i<27;i++){
        cal[i]=to_string((value[i]*value[i])%100);
        if((int)(cal[i].size())==1){
            cal[i]="0"+cal[i];
        }
    }
    while(cin >> s){
        if(isupper(s[0])){
            s[0]=tolower(s[0]);
        }
        for(int i=0;i<27;i++){
            if(s==str[i]){
                cnt[i]++;
                break;
            }
        }
    }
    for(int i=1;i<27;i++){
        string temp=cal[i];
        int temp_cnt=cnt[i];
        int j=i-1;
        while(j>=0&&cal[j].compare(temp)>0){
            cal[j+1]=cal[j];
            cnt[j+1]=cnt[j];
            j--;
        }
        cal[j+1]=temp;
        cnt[j+1]=temp_cnt;
    }
    for(int i=0;i<27;i++){
        if(cnt[i]){
            pos=i;
            is=0;
            break;
        }
    }
    if(is){
        cout << 0;
        return 0;
    }
    ans=cal[pos];
    if(cnt[pos]>1){//cnt是记录对应下标字符串出现的次数，pos记录出现的对应的cal最小的字符串的位置
        for(int i=1;i<cnt[pos];i++){
            ans+=cal[pos];
        }
    }
    for(int i=pos+1;i<27;i++){
        if(cnt[i]){
            for(int j=0;j<cnt[i];j++){
                ans+=cal[i];
            }
        }
    }
    is=1;
    for(int i=0;i<ans.size();i++){
        if(ans[i]!='0'){
            pos=i;
            is=0;
            break;
        }
    }
    if(is){
        cout << 0;
    }
    else{
        for(int i=pos;i<ans.size();i++){
            cout << ans[i];
        }
    }
    return 0;
}