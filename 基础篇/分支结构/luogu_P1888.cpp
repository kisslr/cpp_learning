#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long num,min=pow(10,9),max=0,a,b,temp;
    for(int i=0;i<3;i++){
        cin >> num;
        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
    }
    a=max;
    b=min;
    while(b>0){
        temp=b;
        b=a%b;
        a=temp;
    }
    min/=temp;
    max/=temp;
    cout << min << "/" << max;
    return 0;
}