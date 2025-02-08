// Problem: D - Four Digits
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    string s; cin >> s;
    if(s.size() == 4) {
        cout << s << '\n';
    }
    else {
        for(int i = 0; i < 4 - s.size(); i++) {
            cout << 0;
        }
        cout << s << '\n';
    }
    
    return 0;
}