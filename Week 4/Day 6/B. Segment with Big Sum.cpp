// Problem Name: B. Segment with Big Sum
// Problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    long long k; cin >> k;

    vector<int> v(n);
    for(auto& x: v) cin >> x;

    int l = 0;
    int r = 0;
    int ans = INT_MAX;

    long long sm = 0;
    while(r < n) {
        sm += v[r];
        if(sm >= k) {
            ans = min(ans, r - l + 1);

            while(sm >= k && l <= r) {
                sm -= v[l];
                l++;

                if(sm >= k) ans = min(ans, r - l + 1);
            }
        }

        r++;
    }


    if(ans == INT_MAX) {
        cout << -1 << '\n';
    }
    else {
        cout << ans << '\n';
    }
 
    return 0;
}