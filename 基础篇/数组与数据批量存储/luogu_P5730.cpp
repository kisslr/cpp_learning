#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin >> n;
    int matrix[10][5][3];
    memset(matrix,0,sizeof(matrix));
    matrix[1][0][0]=matrix[1][0][1]=matrix[4][0][1]=1;
    for(int i=0;i<10;i++){
        if(i==1||i==2||i==3||i==7){
            matrix[i][1][0]=matrix[i][1][1]=1;
        }
        else{
            matrix[i][1][1]=1;
            if(i==5||i==6){
                matrix[i][1][2]=1;
            }
        }        
        if(i==1||i==7){
            matrix[i][2][0]=matrix[i][2][1]=1;
        }
        else if(i==0){
            matrix[i][2][1]=1;
        }
        matrix[i][3][1]=1;
        if(i==1||i==3||i==4||i==5||i==7||i==9){
            matrix[i][3][0]=1;
        }
        else if(i==2){
            matrix[i][3][2]=1;
        }
        if(i==1||i==4||i==7){
            matrix[i][4][0]=matrix[i][4][1]=1;
        }
    }
    char num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<n;j++){
            int digit = num[j]-'0';
            for(int k=0;k<3;k++){
                if(matrix[digit][i][k]){
                    cout << ".";
                }
                else{
                    cout << "X";
                }
            }
            if(j!=(n-1)){
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}