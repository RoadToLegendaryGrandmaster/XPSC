// problem name: H. Maximal AND
// problem link: https://codeforces.com/problemset/problem/1669/H
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, int> bits;
        for(int i = 0; i < n; i++) {
            for(int j = 30; j >= 0; j--) {
                if((a[i] >> j) & 1) {
                    bits[j]++;
                }
            }
        }

        long long ans = 0;
        for(int i = 30; i >= 0; i--) {
            if(bits[i] == n) {
                ans += (1LL << i);
            }
            else {
                int rem = n - bits[i];
                if(k >= rem) {
                    ans +=  (1LL << i);
                    k -= rem;
                }
            }
        }

        cout << ans << '\n';
    }
     
    return 0;
}
