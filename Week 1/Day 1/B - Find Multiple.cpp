// Problem: B - Find Multiple
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int a, b, c; cin >> a >> b >> c;

    bool ans = false;
    for(int i = a; i <= b; i++) {
        if(i % c == 0) {
            ans = true;
            cout << i << '\n';
            break;
        }
    }

    if(!ans) cout << -1 << '\n';
    
    return 0;
}