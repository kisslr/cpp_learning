#include<iostream>
using namespace std;
int main()
{
    int num,is_a=0,is_b=0,is_u=0,is_z=0;
    cin >> num;
    int judge = num>4&&num<=12?1:0;
    if(!(num%2)&&judge){
        is_a=1;
        is_u=1;
    }
    else if(!(num%2)&&!judge||judge&&(num%2)){
        is_b=1;
        is_u=1;
    }
    else{
        is_z=1;
    }
    cout << is_a << " " << is_u << " " << is_b << " " << is_z;
    return 0;
}