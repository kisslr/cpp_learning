#include<iostream>
using namespace std;
int main()
{
    int digit,left=0,reserve=0,cost;
    for(int i=0;i<12;i++){
        cin >> digit;
        cost=300+left;
        left=cost-digit;
        if((left)>=100){
            reserve+=(cost-digit)/100*100;
            left-=(cost-digit)/100*100;
        }
        if(left<0){
            cout << -(i+1);
            break;
        }
    }
    if(left>=0){
        cout << reserve*1.2+left;
    }
    return 0;
}