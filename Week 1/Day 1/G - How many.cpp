// Problem: G - How many?
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int cnt = 0;
    int s, t; cin >> s >> t;
    for(int i = 0; i <= 100; i++) {
        for(int j = 0; j <= 100; j++) {
            for(int k = 0; k <= 100; k++) {
                if((i + j + k <= s) && (i * j * k <= t)) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << '\n';
    
    return 0;
}