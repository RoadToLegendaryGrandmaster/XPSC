// Problem Name: A. Merging Arrays
// Problem link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
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
    while(l < n && r < m) {
        
        if(a[l] < b[r]) {
            ans.push_back(a[l]);
            l++;
        }
        else {
            ans.push_back(b[r]);
            r++;
        }
    }

    while(l < n) {
        ans.push_back(a[l]);
        l++;
    }

    while(r < m) {
        ans.push_back(b[r]);
        r++;
    }

    for(auto & x: ans) {
        cout << x << ' ';
    }

    cout << '\n';
    
    return 0;
}