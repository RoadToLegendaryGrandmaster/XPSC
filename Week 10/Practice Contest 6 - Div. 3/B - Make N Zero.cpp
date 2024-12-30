// Problem name: B - Make N Zero
// Problem link: https://vjudge.net/contest/682896#problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n > 5) {
            cout << "YES" << '\n';
        }
        else {
            if(n == 1 || n == 2 || n == 5) {
                cout << "NO" << '\n';
            }
            else {
                cout << "YES" << '\n';
            }
        }
    }
     
    return 0;
}
