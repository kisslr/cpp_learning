#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int ans[500] = {0};
    int temp[500] = {0};
    int n,carry=0;
    ans[0]=1;
    temp[0]=1;
    cin >> n;
    for(int i=2;i<=n;i++){
        for(int j=0;j<200;j++){
            ans[j]=carry+ans[j]*i;
            if(ans[j]>9){
                carry=ans[j]/10;
                ans[j]%=10;
            }
            else{
                carry=0;
            }
        }
        for(int x=0;x<=200;x++){
            temp[x]+=ans[x]+carry;
            if(temp[x]>9){
                carry=temp[x]/10;
                temp[x]%=10;
            }
            else{
                carry=0;
            }
        }
    }
    int index=499;
    while(!temp[index]){
            index--;
    }
    stringstream ss;
    string result;
    for(int i=index;i>=0;i--){
        ss << temp[i];
    }
    result = ss.str();
    cout << result;
    return 0;
}