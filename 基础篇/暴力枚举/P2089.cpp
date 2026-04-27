#include<iostream>
using namespace std;
int arr[70000][10];
int ans=0;
int path[10];
void dfs(int index, int left) {
    if (index == 10) {               // 10 种配料全部选完
        if (left == 0) {             // 恰好用完美味值
            for (int i = 0; i < 10; ++i)
                arr[ans][i] = path[i];
            ans++;
        }
        return;
    }
    for (int i = 1; i <= 3; ++i) {   // 每种配料放 1~3 克
        path[index] = i;
        dfs(index + 1, left - i);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    dfs(0, n);
    cout << ans;
    for(int i=0;i<ans;i++){
        cout << '\n';
        for(int j=0;j<10;j++){
            cout << arr[i][j];
            if(j<9){
                cout << " ";
            }
        }
    }
    return 0;
}