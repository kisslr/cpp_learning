#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int num1=0,num2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            num1++;
            printf("%02d",num1);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=1;j<(n-i);j++){
            printf("  ");
        }
        for(int x=0;x<(i+1);x++){
            num2++;
            printf("%02d",num2);
        }
        printf("\n");
    }
    return 0;
}