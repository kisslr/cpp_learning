#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int num;
    double ans=0;
    int num1=0,num2=0,num3=0;
    cin >> num;
    num1=num-150<0?num:150;
    num-=150;
    if(num>0){
        num2=num-250<0?num:250;
        num-=250;
    }
    if(num>0){
        num3=num;
    }
    ans=num1*0.4463+num2*0.4663+num3*0.5663;
    printf("%.1lf",ans);
    return 0;
}