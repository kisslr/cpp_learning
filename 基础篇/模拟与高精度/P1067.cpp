#include<iostream>
using namespace std;
int main(){
    int n;
    int alpha[101]={0};
    cin >> n;
    for(int i=n;i>=0;i--){
        cin >> alpha[i];
    }
    for(int i=n;i>=0;i--){
        if(alpha[i]>0&&i<n){
            cout << "+";
        }
        if(i>0&&alpha[i]==-1){
            cout << "-";
        }
        else if((!i&&alpha[i])||(i>0&&alpha[i]&&alpha[i]!=1)){
            cout << alpha[i];
        }
        if(i>0&&alpha[i]){
            cout << "x";
            if(i>1){
                cout << "^" << i;
            }
        }
    }
    return 0;
}