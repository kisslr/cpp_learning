#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3,min=81,max=0;
    cin >> s1 >> s2 >> s3;
    int hash[81]={0};
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                hash[i+k+j]++;
            }
        }
    }
    for(int i=3;i<81;i++){
        if(hash[i]>max){
            max=hash[i];
        }
    }
    for(int i=3;i<81;i++){
        if(hash[i]==max){
            min=i;
            break;
        }
    }
    cout << min;
    return 0;
}