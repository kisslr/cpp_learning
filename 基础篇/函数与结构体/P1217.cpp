#include<string>
#include<vector>
#include<cstdio>
using namespace std;
bool cal(int n){
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-1-i]){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    vector<bool> is_prime(b + 1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= b; ++i) {
    if (is_prime[i]) {
        primes.push_back(i);
    }
    for (int p : primes) {
        if ((long long)i * p > b) break;
        is_prime[i * p] = false;
        if (i % p == 0) break; // 关键：保证每个合数只被最小质因子筛掉
    }
    }
    for(int i=a;i<=b;i++){
        if(is_prime[i]){
            if(cal(i)){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}