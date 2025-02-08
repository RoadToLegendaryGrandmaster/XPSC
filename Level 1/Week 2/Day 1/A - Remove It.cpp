// Problem Name: A - Remove It
// Problem link: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, x; cin >> n >> x;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    for(auto& a: v) {
        if(a != x) {
            cout << a << ' ';
        }
    }

    cout << '\n';

    return 0;
}
