// Problem Name: F. Segments with Small Spread
// Problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    long long k; cin >> k;

    vector<long long> v(n);
    for(auto& x: v) cin >> x;

    int l = 0;
    int r = 0;
    long long ans = 0;
    multiset<long long> st;

    while(r < n) {
        st.insert(v[r]);
        long long mn = *st.begin();
        long long mx = *st.rbegin();

        if(mx - mn <= k) {
            ans += (r  - l + 1);
        }
        else {
            while(l <= r) {
                mn = *st.begin();
                mx = *st.rbegin();

                if(mx - mn <= k) {
                   break;
                }

                st.erase(st.find(v[l]));
                l++;
            }
            
            mn = *st.begin();
            mx = *st.rbegin();
            if(mx - mn <= k) {
               ans += (r  - l + 1);
            }
        }

        r++;
    }

    cout << ans << '\n';

    
    return 0;
}