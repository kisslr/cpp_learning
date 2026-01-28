#include<iostream>
using namespace std;
int main()
{
    int m,n,max=0,day=0;
    for(int i=1;i<8;i++){
        cin >> m >> n;
        if((m+n)>8&&(m+n)>max){
            max=m+n;
            day=i;
        }
    }
    cout << day;
    return 0;
}