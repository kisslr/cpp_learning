#include<iostream>
using namespace std;
int light[2000000]={0};
int main(){
    int n,max=0,min=2e7+1,t;
    double a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> t;
        if((int)a<min){
            min=(int)a;
        }         
        if(((int)(a*t))>max){
            max=(int)(a*t);
        }           
        for(int k=1;k<=t;k++){
            light[(int)(a*k)-1]++;
            light[(int)(a*k)-1]%=2;
        }     
    }
    for(int i=min-1;i<max;i++){
        if(light[i]){
            cout << i+1;
            break;
        }
    }
    return 0;
}