#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int maxn = max(a,max(b,c));
    int minn = min(a,min(b,c));
    cout << minn << " " << a+b+c-maxn-minn << " " << maxn;
    return 0;
}