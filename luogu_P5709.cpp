#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,t,s,ans;
    cin >> m >> t >> s;
    ans=!t?0:m-ceil(1.0*s/t);
    cout << (ans<0?0:ans);
    return 0;
}