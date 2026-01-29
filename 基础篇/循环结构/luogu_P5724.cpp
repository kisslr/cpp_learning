#include<iostream>
using namespace std;
int main()
{
    int n,num,min,max;
    cin >> n;
    cin >> num;
    min=num;
    max=num;
    for(int i=1;i<n;i++){
        cin >> num;
        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
    }
    cout << max-min;
    return 0;
}