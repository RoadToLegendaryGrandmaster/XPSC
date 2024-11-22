// Problem Name: E. Segments with Small Set
// Problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(auto& x: v) cin >> x;

    int l = 0;
    int r = 0;
    long long ans = 0;

    map<int, int> mp;
    while(r < n) {
        mp[v[r]]++;

        while(mp.size() > k) {
            mp[v[l]]--;
            if(mp[v[l]] == 0) {
                mp.erase(v[l]);
            }

            l++;
        }

        ans += r - l + 1;

        r++;
    }

    cout << ans << '\n';
    return 0;
}