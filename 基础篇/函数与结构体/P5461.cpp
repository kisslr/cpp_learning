#include<iostream>
#include<vector>
using namespace std;
void cal(vector<vector<int>>& matrix,int x,int y,int n){
    if(!n){
        return;
    }
    int len=n/2;
    for(int i=x;i<x+len;i++){
        for(int j=y;j<y+len;j++){
            matrix[i][j]=0;
        }
    }
    cal(matrix,x+len,y,n>>1);
    cal(matrix,x,y+len,n>>1);
    cal(matrix,x+len,y+len,n>>1);
    return;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> matrix(2<<(n-1),vector<int>(2<<(n-1),1));
    cal(matrix,0,0,2<<(n-1));
    for(int i=0;i<(2<<(n-1));i++){
        for(int j=0;j<(2<<(n-1));j++){
            cout << matrix[i][j];
            if(j<(2<<(n-1))-1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}