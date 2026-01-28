#include<iostream>
using namespace std;
int main()
{
    int n,num=0;
    cin >> n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            num++;
            printf("%02d",num);
        }
        cout << "\n";
    }
    return 0;
}