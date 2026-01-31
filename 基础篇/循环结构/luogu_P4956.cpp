#include<iostream>
using namespace std;
int main()
{
    int N,x,k;
    cin >> N;
    N/=(52*7);
    for(int i=100;i>0;i--){
        k=N-i;
        if((!(k%3))&&k>0){
            x=i;
            break;
        }
    }
    cout << x << endl << k/3;
    return 0;
}