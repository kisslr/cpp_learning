#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,tem;
    int wcnt=0,lcnt=0,nmax,nmin;
    while(cin >> tem){
        if(tem.find('E')!=string::npos){
            break;
        }
        s=s+tem;
    }
    s=s+tem.substr(0,tem.find('E'));
    if (s.empty())
    {
        cout << 0 << ":" << 0 << endl << endl;
        cout << 0 << ":" << 0;
        return 0;
    }
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='W'){
            wcnt++;
        }
        else if(s[i]=='L'){
            lcnt++;
        }
        nmax=max(wcnt,lcnt);
        nmin=min(wcnt,lcnt);
        if(nmax>=11&&(nmax-nmin)>=2){
            cout << wcnt << ":" << lcnt << endl;
            wcnt=0;
            lcnt=0;
        }
    }
    cout << wcnt << ":" << lcnt << endl << endl;
    wcnt=lcnt=0;
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='W'){
            wcnt++;
        }
        else if(s[i]=='L'){
            lcnt++;
        }
        nmax=max(wcnt,lcnt);
        nmin=min(wcnt,lcnt);
        if(nmax>=21&&(nmax-nmin)>=2){
            cout << wcnt << ":" << lcnt << endl;
            wcnt=0;
            lcnt=0;
        }
    }
    if(wcnt!=0||lcnt!=0){
            cout << wcnt << ":" << lcnt;
    }
    return 0;
}