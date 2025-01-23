// Problem name: D. Fast search
// Problem link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int q; cin >> q;
    while(q--) {
        int l, r; cin >> l >> r;
        auto a = lower_bound(v.begin(), v.end(), l);
        auto b = upper_bound(v.begin(), v.end(), r);

        cout << b - a << ' ';
    }

    cout << '\n';
     
    return 0;
}
