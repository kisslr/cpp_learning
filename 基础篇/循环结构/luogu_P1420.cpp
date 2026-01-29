#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int len,cnt=1,ans=1,num,lst;
    cin >> len;
    cin >> lst;
    for(int i=1;i<len;i++){
        cin >> num;
        if(num==(lst+1)){
            cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=1;
        }
        lst=num;
    }
    ans=max(ans,cnt);
    cout << ans;
    return 0;
}