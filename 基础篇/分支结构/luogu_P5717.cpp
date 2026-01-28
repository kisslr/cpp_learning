#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long sum=0,max=0,mid,min=100000,num;
    int is;
    for(int i=0;i<3;i++){
        cin >> num;
        sum+=num;
        if(num>=max){
            max=num;
        }
        if(num<=min){
            min=num;
        }
    }
    mid=sum-max-min;
    is=(min+mid)>max?1:0;
    if(!is){
        cout << "Not triangle";
    }
    else{
        if((long long)pow(min,2)+(long long)pow(mid,2)==(long long)pow(max,2)){
            cout << "Right triangle";
        }
        else if((long long)pow(min,2)+(long long)pow(mid,2)>(long long)pow(max,2)){
            cout << "Acute triangle";
        }
        else{
            cout << "Obtuse triangle";
        }
        if(min==max||min==mid||mid==max){
            cout << endl << "Isosceles triangle";
            if(min==max&&min==mid&&mid==max){
                cout << endl << "Equilateral triangle";
            }
        }
    }
    return 0;
}