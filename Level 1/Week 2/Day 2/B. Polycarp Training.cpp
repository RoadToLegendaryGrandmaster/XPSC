// Problem Name: B. Polycarp Training
// Problem link: https://codeforces.com/contest/1165/problem/B
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

    int cnt = 1;
    for(int i = 0; i < n; i++) {
        if(v[i] >= cnt) {
            cnt++;
        }
    }

    cout << cnt - 1 << '\n';
    
    return 0;
}