// Problem Name: C - Plus or Minus
// Problem link: https://codeforces.com/problemset/problem/1807/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        if(a + b == c) {
            cout << '+' << '\n';
        }
        else {
            cout << '-' << '\n';
        }
    }

    return 0;
}