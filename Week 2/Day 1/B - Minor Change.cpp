// Problem Name: B - Minor Change
// Problem link: https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    string a, b; cin >> a >> b;
    int n = a.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
