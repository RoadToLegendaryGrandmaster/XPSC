// Problem Name: A. Segment with Small Sum
// Problem link: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    long long k; cin >> k;
    vector<int> v;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    int l = 0;
    int r = 0;
    int ans = 0;

    long long sm = 0;
    while(r < n) {
        sm += v[r];
        if(sm <= k) {
            ans = max(ans, r - l + 1);
        }
        else {
            sm -= v[l];
            l++;
        }

        r++;
    }
    
    cout << ans << '\n';

    return 0;
}