#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    string s;
    int boy=0,girl=0;
    int alpha[26]={0};
    alpha[1]=3,alpha['o'-'a']=2,alpha['g'-'a']=4,alpha['i'-'a']=3,alpha['r'-'a']=2;
    char alpha_boy[]={'b','o','y'},alpha_girl[]={'g','i','r','l'};
    cin >> s;
    int cnt[s.size()],len=s.size();
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<s.size();i++){
        for(int t=0;t<3;t++){
            if(!cnt[i]&&s[i]==alpha_boy[t]){
                boy++;
                cnt[i]++;
                for(int j=1;j<alpha[s[i]-'a']&&((i+j)<len);j++){
                    if(!cnt[i+j]&&s[i+j]==alpha_boy[t+j]){
                        cnt[i+j]++;
                    }
                    else{
                        break;
                    }
                }
                break;
            }
        }
        for(int t=0;t<4;t++){
            if(!cnt[i]&&s[i]==alpha_girl[t]){
                girl++;
                cnt[i]++;
                for(int j=1;j<alpha[s[i]-'a']&&((i+j)<len);j++){
                    if(!cnt[i+j]&&s[i+j]==alpha_girl[t+j]){
                        cnt[i+j]++;
                    }
                    else{
                        break;
                    }
                }
                break;
            }
        }
    }
    cout << boy << endl << girl;
    return 0;
}