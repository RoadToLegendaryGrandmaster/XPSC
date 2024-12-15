// Problem name: B - Maximise Score
// Problem link: https://vjudge.net/contest/679642#problem/B

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            int curr = 0;
            if(i - 1 >= 0) {
                curr = max(curr, abs(a[i - 1] - a[i]));
            }

            if(i + 1 < n) {
                curr = max(curr, abs(a[i + 1] - a[i]));
            }

            ans = min(ans, curr);
        }

        cout << ans << '\n';
    }
     
    return 0;
}
