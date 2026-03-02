#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<bool> is_prime(n + 1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= n; i++){
        if(is_prime[i]){
            primes.push_back(i);
            for(int j = i * i; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }
    for(int i=4;i<=n;i+=2){
        for(int j=0;j<primes.size()&&primes[j]<i;j++){
            if(is_prime[i-primes[j]]){
                cout << i << "=" << primes[j] << "+" << i-primes[j] << endl;
                break;
            }
        }
    }
    return 0;
}