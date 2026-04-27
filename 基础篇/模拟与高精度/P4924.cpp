#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void mode1(vector<vector<int>> &matrix,int x,int y,int r,int n){
    int len=2*r+1;
    x--,y--;
    for(int i=x-r,j=y+r;i<x+r&&j>y-r;i++,j--){
        int i_end=i,j_end=j;
        while (i_end<=x+r&&j_end>=y-r)
        {
            swap(matrix[i][j_end--],matrix[i_end++][j]);
        }
    }
    int rstart=max(x-r,0),lend=min(y+r,n-1),y_start=y-r;
    for(int i=0;i<len;i++){
        reverse(matrix[rstart].begin()+y_start,matrix[rstart].begin()+lend+1);
        rstart++;
    }
    return;
}
void mode0(vector<vector<int>> &matrix,int x,int y,int r,int n){
    int len=2*r+1;
    x--,y--;
    for(int i=x-r,j=y-r;i<x+r&&j<y+r;i++,j++){
        int i_end=i,j_end=j;
        while (i_end<=x+r&&j_end<=y+r)
        {
            swap(matrix[i][j_end++],matrix[i_end++][j]);
        }
    }
    int rstart=max(x-r,0),lend=min(y+r,n-1),y_start=y-r;
    for(int i=0;i<len;i++){
        reverse(matrix[rstart].begin()+y_start,matrix[rstart].begin()+lend+1);
        rstart++;
    }
    return;
}
int main(){
    int n,m,cnt=1,x,y,r,z;
    cin >> n >> m;
    vector<vector<int>> matrix(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=cnt;
            cnt++;
        }
    }
    for(int i=0;i<m;i++){
        cin >> x >> y >> r >> z;
        if(z){
            mode1(matrix,x,y,r,n);
        }
        else{
            mode0(matrix,x,y,r,n);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j];
            if(j<n-1){
                cout << " ";
            }
        }
        if(i<n-1){
            cout << endl;
        }
    }
    return 0;
}