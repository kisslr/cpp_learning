#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() { 
    int num = 0, keyboard[26], ans = 0;
    string s;
    for (int i = 0; i < 26; i++) {
        keyboard[i] = 1 + num;
        if(i==18||i==25){
            keyboard[i]=4;
            num=2;
        }
        num = (num + 1) % 3;
    }
    getline(cin, s);
    for (int i = 0; i <s.size(); i++) {  
        if (isalpha(s[i])) {
            char c = tolower(s[i]);  
            ans += keyboard[c - 'a'];
        }
        else if (isspace(s[i])) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}