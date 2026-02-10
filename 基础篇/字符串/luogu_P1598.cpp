#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s1,s2;
    int space[26]={0},star[26]={0},max=0;
    getline(cin,s1);
    for(int i=1;i<4;i++){
        getline(cin,s2);
        s1=s1+s2;
    }
    for(int i=0;i<s1.size();i++){
        if(isupper(s1[i])){
            star[s1[i]-'A']++;
        }
    }
    for(int i=0;i<26;i++){
        if(star[i]>max){
            max=star[i];
        }
    }
    for(int i=0;i<26;i++){
        space[i]=max-star[i];
    }
    for(int i=0;i<max;i++){
        for(int j=0;j<26;j++){
            if(space[j]){
                cout << " ";
                space[j]--;
            }
            else{
                cout << "*";
            }
            if(j<25){
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i=0;i<26;i++){
        cout << (char)('A'+i);
        if(i<25){
                cout << " ";
        }
    }
    return 0;
}