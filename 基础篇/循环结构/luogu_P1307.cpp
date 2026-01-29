#include<iostream>
using namespace std;
int main()
{
    int num,digit=0,cut=0,print=0,index=0;
    int ans[10];
    cin >> num;
    if(num<0){
        digit = 1;
        num = -num;
    }
    else if(!num){
        cout << 0;
        return 0;
    }
    while(num>0){
        cut=num%10;
        num/=10;
        ans[index]=cut;
        index++;
    }
    for(int i=0;i<10;i++){
        if(ans[i]){
            cut=i;
            break;
        }
    }
    for(int i=cut;i<index;i++){
        print*=10;
        print+=ans[i];
    }
    if(digit){
        print = -print;
    }
    cout << print;
    return 0;
}