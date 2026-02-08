#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s1,s2;
    int cnt=0,locate=0,ans,is=0;
    cin >> s1;
    cin.ignore();
    for(int i=0;i<(int)s1.size();i++){
        if(isupper(s1[i])){
            s1[i]=(char)tolower(s1[i]);
        }
    }
    getline(cin,s2);
    for(int i=0;i<(int)s2.size();i++){
        if(isupper(s2[i])){
            s2[i]=(char)tolower(s2[i]);
        }
    }
    if(s2.find(s1)==string::npos){
        cout << -1;
        return 0;
    }
    else{
        while (s2.find(s1,locate)!=string::npos)
        {
            locate = s2.find(s1,locate);
            if(((locate==0)||(isalpha(s2[locate-1])==0))&&(s2.size()==s1.size()||(isalpha(s2[locate+s1.size()])==0))){
                is=1;
                ans=locate;
                break;
            }
            locate = s2.find(s1,locate+s1.size());
        }
        if(!is){
            cout << -1;
            return 0;
        }
        else{
            cnt=1;
        }
    }
    while (s2.find(s1,locate+s1.size())!=string::npos)
    {
        locate = s2.find(s1,locate+s1.size());
        if(((locate==0)||(isalpha(s2[locate-1])==0))&&(s2.size()==s1.size()||(isalpha(s2[locate+s1.size()])==0))){
                cnt++;
            }
    }
    cout << cnt << ' ' << ans;
    return 0;
}