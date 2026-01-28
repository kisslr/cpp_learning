#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int year;
    cin >> year;
    int judge1 = (!(year%4))&&(year%100);
    int judge2 = !(year%400);
    int ans=judge2||judge1;
    cout << ans;
    return 0;
}