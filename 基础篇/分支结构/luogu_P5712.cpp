#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if(num<2){
        printf("Today, I ate %d apple.",num);
    }
    else{
        printf("Today, I ate %d apples.",num);
    }
return 0;
}