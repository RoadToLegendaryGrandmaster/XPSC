// Problem Name: D. Number of Segments with Big Sum
// Problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
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
    long long sm = 0;
    long long ans = 0;

    while(r < n) {
        sm += v[r];

        if(sm >= k) {
            ans += n - r;

            while(sm >= k && l <= r) {
                sm -= v[l];
                l++;

                if(sm >= k) ans += n - r;
            }
        }

        r++;
    }

    cout << ans << '\n';
    
    return 0;
}