// Problem: F - Not Found
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    string s; cin >> s;
    map<char, bool> mp;

    for(auto& c: s) {
        mp[c] = true;
    }

    for(char i = 'a'; i <= 'z'; i++) {
        if(!mp[i]) {
            cout << i << '\n';
            return 0;
        }
    }

    cout << "None" << '\n';
    
    return 0;
}