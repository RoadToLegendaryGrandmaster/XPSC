// Problem name: F. String Game
// Problem link: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    string t, p; cin >> t >> p;
    
    int n = t.size();
    int m = p.size();

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }
    
    bool f = false;
    auto ok = [&](int del) {
        vector<bool> bad(n);
        for(int i = 0; i <= del; i++) {
            bad[a[i]] = true;
        }

        int j = 0;
        for(int i = 0; i < n; i++) {
            if(!bad[i] && t[i] == p[j]) {
                j++;
            }

            if(j == m) {
                f = true;
                return true;
            }
        }

        return false;
    };


    int l = 0;
    int r = n - 1;
    int ans = 0;

    while(l <= r) {
        int mid = l + (r - l) / 2;

        if(ok(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    if(f) cout << ans + 1 << '\n';
    else cout << ans << '\n';

    return 0;
}
