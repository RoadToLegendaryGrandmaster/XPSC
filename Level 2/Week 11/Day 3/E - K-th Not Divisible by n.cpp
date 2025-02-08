// Problem name: E - K-th Not Divisible by n
// Problem link: https://vjudge.net/contest/683822#problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;

        auto ok = [&](int mid) {
            return ((mid - (mid / n)) >= k);
        };

        int l = 1, r = 2e9, mid, ans;
        while(l <= r) {
            mid = l + (r - l) / 2;
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
