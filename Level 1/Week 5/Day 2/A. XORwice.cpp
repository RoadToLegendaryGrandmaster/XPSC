// Problem Name: A. XORwice
// Problem link: https://codeforces.com/problemset/problem/1421/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        cout << (a ^ b) << '\n';
    }    
    
    return 0;
}