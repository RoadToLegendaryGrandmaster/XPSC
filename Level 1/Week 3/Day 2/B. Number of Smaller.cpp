// Problem Name: B. Number of Smaller
// Problem link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);

    for(auto& x: a) cin >> x;
    for(auto& x: b) cin >> x;

    int l = 0;
    int r = 0;
    
    long long ans = 0;
    while(l < n && r < m) {
        int curr = a[l];
        int cnt1 = 0;
        int cnt2 = 0;

        while(l < n && a[l] == curr) {
            cnt1++;
            l++;
        }

        while(r < m && curr > b[r]) {
            r++;
        }

        while(r < m && b[r] == curr) {
            cnt2++;
            r++;
        }

        ans += (1LL * cnt1 * cnt2);
    }
        
    cout << ans << '\n';

    return 0;
}