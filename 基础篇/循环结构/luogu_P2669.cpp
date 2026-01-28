#include<iostream>
using namespace std;
int main()
{
    int k,day=0;
    cin >> k;
    long long ans=0;
    for(int i=1;;i++){
        for(int j=1;j<=i;j++){
            day++;
            if(day<=k){
                ans+=i;
            }
            else{
                break;
            }
        }
        if(day>k){
            break;
        }
    }
    cout << ans;
    return 0;
}