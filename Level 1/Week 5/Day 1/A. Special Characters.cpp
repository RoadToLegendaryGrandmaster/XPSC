// Problem Name: A. Special Characters
// Problem link: https://codeforces.com/problemset/problem/1948/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        
        if(n % 2 == 1) {
            cout << "NO" << '\n';
            continue;
        }

        cout << "YES" << '\n';
        char c = 'A';
        for(int i = 0; i < n / 2; i++) {
            cout << c << c;
            c += 1;
            if(c >= 'Z') {
                c = 'A';
            }
        }

        cout << '\n';
    }    
    
    return 0;
}