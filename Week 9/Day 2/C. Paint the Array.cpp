// Problem name: C. Paint the Array
// Problem link: https://codeforces.com/contest/1618/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        long long g1 = 0;
        long long g2 = 0;
        for(int i = 0; i < n; i += 2) {
            g1 = __gcd(g1, a[i]);
        }

        for(int i = 1; i < n; i += 2) {
            g2 = __gcd(g2, a[i]);
        }

        long long ans = 0;
        bool f = true;
        for(int i = 1; i < n; i += 2) {
            if(a[i] % g1 == 0) {
                f = false;
                break;
            }
        }

        if(f) {
            ans = g1;
        }
        else {
            f = true;
            for(int i = 0; i < n; i += 2) {
                if(a[i] % g2 == 0) {
                    f = false;
                    break;
                }
            }

            if(f) {
                ans = g2;
            }
        }

        cout << ans << '\n';
    }
     
    return 0;
}
