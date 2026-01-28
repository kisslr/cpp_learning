#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int target,num,price,sum,minn=pow(10,9);
    cin >> target;
    for(int i=0;i<3;i++){
        cin >> num >> price;
        sum=(ceil(1.0*target/num))*price;
        if(sum<minn){
            minn=sum;
        }
    }
    cout << minn;
    return 0;
}