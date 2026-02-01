#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N,sum=0,ans=0;
    cin >> N;
    int grade[N][4];
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            cin >> grade[i][j];
            sum+=grade[i][j];
        }
        grade[i][3]=sum;
        sum=0;
    }
    for(int i=0;i<(N-1);i++){
        for(int j=i+1;j<N;j++){
            int is=1;
            if(abs(grade[i][3]-grade[j][3])>10){
                is=0;
            }
            else{
                for(int k=0;k<3;k++){
                    if((abs(grade[i][k]-grade[j][k]))>5){
                        is=0;
                        break;
                    }
                }
            }
            if(is){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}