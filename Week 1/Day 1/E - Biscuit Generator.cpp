// Problem: E - Biscuit Generator
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int a, b, t; cin >> a >> b >> t;  

    int i = 1;
    int s = a;
    int cnt = 0;
    while(true) {
        if(s > t) break;
        cnt += b;
        s = i * a;
        ++i;
    }

    if(cnt - b < 0) {
        cout << 0 << '\n';
    }
    else {
        cout << cnt - b << '\n';
    }
    
    return 0;
}