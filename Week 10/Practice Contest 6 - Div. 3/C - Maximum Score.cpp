// Problem name: C - Maximum Score
// Problem link: https://vjudge.net/contest/682896#problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ans = 0;

        int cnt[2] = {0, 0};
        for(int i = 0; i < n; i++) {
            int a; cin >> a;

            if(a == 0) cnt[0]++;
            else cnt[1]++;
        }

        cout << min(cnt[0], cnt[1]) << '\n';
    }
     
    return 0;
}
