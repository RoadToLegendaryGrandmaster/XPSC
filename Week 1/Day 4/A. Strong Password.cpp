// Problem Name: A. Strong Password
// Problem link: https://codeforces.com/contest/1997/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int j = -1;
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == s[i + 1]) {
                j = i;
            }
        }

        if(j == -1) {
            if(s[s.size() - 1] == 'a') cout << s << 'b' << '\n';
            else cout << s << 'a' << '\n';
        }
        else {
            if(s[j] == 'a') {
                cout << s.substr(0, j + 1) << 'b' << s.substr(j + 1) << '\n';
            }
            else {
                cout << s.substr(0, j + 1) << 'a' << s.substr(j + 1) << '\n';
            }
        }
    }
    
    return 0;
}