#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    int min=0,hour=0;
    cin >>a>>b>>c>>d;
    if(d<b){
        min=d+60-b;
        hour-=1;
    }
    else{
        min=d-b;
    }
    hour+=c-a;
    cout << hour << " " << min;
    return 0;
}