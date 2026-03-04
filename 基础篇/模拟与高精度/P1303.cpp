#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    vector<int> a1(s1.size(),0),a2(s2.size(),0),ans(s1.size()+s2.size()+1,0);
    for(int i=0,j=s1.size()-1;i<s1.size()&&j>=0;i++,j--){
        a1[i]=s1[j]-'0';
    }
    for(int i=0,j=s2.size()-1;i<s2.size()&&j>=0;i++,j--){
        a2[i]=s2[j]-'0';
    }
    for(int i=0;i<s2.size();i++){
        for(int j=0;j<s1.size();j++){
            ans[i+j]+=a2[i]*a1[j];
            if(ans[i+j]>=10){
                ans[i+j+1]+=ans[i+j]/10;
                ans[i+j]%=10;
            }
        }
    }
    int index=0;
    for(int i=ans.size()-1;i>=0;i--){
        if(ans[i]!=0){
            index=i;
            break;
        }
    }
    for(int i=index;i>=0;i--){
        cout << ans[i];
    }
    return 0;
}