#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void quicksort(vector<int> &arr,int low,int high){
    if (low >= high) return; // 🛑 必须加：递归基，防止栈溢出
    
    int pivot = arr[(low + high) / 2]; // 🛑 保存基准值，防止交换后 arr[mid] 改变
    int i = low, j = high;
    
    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++; j--;
        }
    }
    if (low < j) quicksort(arr, low, j);
    if (i < high) quicksort(arr, i, high);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    quicksort(arr,0,n-1);
    cout << arr[k];
    return 0;
}