#include<iostream>
using namespace std;
int main()
{
    long long n,i=0;
    cin >> n;
    double sum=0;
    do{
        i++;
        sum+=(1.0)/i;
    }while(sum<=n);
    cout << i;
    return 0;
}