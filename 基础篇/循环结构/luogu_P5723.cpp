#include<iostream>
using namespace std;
int main(){
    int L,sum=0,cnt=0;
    cin >> L;
    for(int i=2;;i++){
        int is=1;
        for(int j=2;j*j<=i;j++){
            if(!(i%j)){
                is=0;
            }
        }
        if(is){
            sum+=i;
            cnt++;
        }
        if(sum>L){
            sum-=i;
            cnt--;
            break;
        }
        else if(is&&sum<=L){
            cout << i << endl;
        }
    }
    cout << cnt;
    return 0;
}