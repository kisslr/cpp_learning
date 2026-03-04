#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s1,s2;
    int index=0;
    char flag='+';
    cin >> s1 >> s2;
    if(s1.size()<s2.size()||(s1.size()==s2.size()&&s1<s2)){
        swap(s1,s2);
        flag='-';
    }
    vector<int> a(s1.size(),0),b(s1.size(),0),ans(s1.size(),0);
    for(int i=0,j=s1.size()-1;i<s1.size()&&j>=0;i++,j--){
        a[i]=s1[j]-'0';
    }
    for(int i=0,j=s2.size()-1;i<s2.size()&&j>=0;i++,j--){
        b[i]=s2[j]-'0';
    }
    for(int i=0;i<s1.size();i++){
        int temp=a[i]-b[i];
        if(temp<0){
            temp+=10;
            a[i+1]--;
        }
        ans[i]=temp;
    }
    for(int i=ans.size()-1;i>=0;i--){
        if(ans[i]!=0){
            index=i;
            break;
        }
    }
    if(flag=='-'){
        cout << "-";
    }
    for(int i=index;i>=0;i--){
        cout << ans[i];
    }
    return 0;
}