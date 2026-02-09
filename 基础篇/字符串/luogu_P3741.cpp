#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n, ans = 0, is = 1;
    string s;
    cin >> n >> s;
    vector<int> hash(n, 0);
    for (int i = 0; i < n - 1; i++) {
        if (!hash[i] && !hash[i+1] && s[i] == 'V' && s[i+1] == 'K') {
            ans++;
            hash[i] = 1;
            hash[i+1] = 1;
        }
    }
    for (int i = 0; i < n - 1 && is; i++) {
        if (!hash[i] && !hash[i+1] && s[i] == s[i+1]) {
            ans++;
            is = 0;
        }
    }
    cout << ans << endl;
    return 0;
}