// Problem Name: C. Number of Segments with Small Sum
// Problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int32_t n; cin >> n;
    int64_t k; cin >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int32_t l = 0;
    int32_t r = 0;
    int64_t ans = 0;
    int64_t sm = 0;
    while(r < n) {
        sm += v[r];
        if(sm <= k) {
            ans += (r - l + 1);
        }
        else {
            while(sm > k && l <= r) {
                sm -= v[l];
                l++;
            }
            if(sm <= k) {
                ans += (r - l + 1);
            }
        }

        r++;
    }
    
    cout << ans << '\n';

    return 0;
}