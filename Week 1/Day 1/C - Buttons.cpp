// Problem: C - Buttons
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int a, b; cin >> a >> b;

    if(a == b) {
        cout << a + b << '\n';
    }
    else {
        int mx = max(a, b);
        cout << mx + (mx--) << '\n';
    }
    
    return 0;
}