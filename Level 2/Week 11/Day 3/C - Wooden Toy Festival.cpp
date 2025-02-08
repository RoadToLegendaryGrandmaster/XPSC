// problem name: C - Wooden Toy Festival
// Problem link: https://vjudge.net/contest/683822#problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        auto ok = [&](int time) {
            int cnt = 1, l = 0;
            for(int r = 0; r < n; r++) {
                if((a[r] - a[l]) > 2 * time) {
                    l = r;
                    cnt++;
                }
            }

            return cnt <= 3;
        };

        int l = 0;
        int r = 1e9;
        int ans = 0;

        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(ok(mid)) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }
     
    return 0;
}
