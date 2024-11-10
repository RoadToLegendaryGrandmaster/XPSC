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

    vector<int> ans;

    int cnt = 0;
    while(r < m) {
        if(l < n && a[l] < b[r]) {
            cnt++;
            l++;
        }
        else {
            r++;
            ans.push_back(cnt);
        }
    }

    for(auto& x: ans) {
        cout << x << ' ';
    }

    cout << '\n';
    
    return 0;
}