#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,na,nb,cnta=0,cntb=0,paca=0,pacb=0;
    cin >> n >> na >> nb;
    vector<int> a(na,0),b(nb,0);
    vector<vector<int>> matrix(5,vector<int>(5,0));
    for(int i=0,j=0;j<5&&i<5;i++,j++){
        matrix[i][j]=0;
    }
    for(int i=0,j=1;i<3&&j<4;i++,j++){
        matrix[i][j]=-1;
    }
    for(int i=0,j=2;i<3&&j<5;i++,j++){
        matrix[i][j]=1;
    }
    matrix[0][3]=matrix[3][4]=1;
    matrix[0][4]=matrix[1][4]=-1;
    for(int i=1;i<5;i++){
        for(int j=0;j<i;j++){
            matrix[i][j]=-matrix[j][i];
        }
    }
    for(int i=0;i<na;i++){
        cin >> a[i];
    }
    for(int i=0;i<nb;i++){
        cin >> b[i];
    }
    for(int i=0;i<n;i++){
        if(matrix[a[paca]][b[pacb]]==1){
            cnta++;
        }
        else if(matrix[a[paca]][b[pacb]]==-1){
            cntb++;
        }
        paca++,pacb++;
        if(paca==na){
            paca%=na;
        }
        if(pacb==nb){
            pacb%=nb;
        }
    }
    cout << cnta << " " << cntb;
}