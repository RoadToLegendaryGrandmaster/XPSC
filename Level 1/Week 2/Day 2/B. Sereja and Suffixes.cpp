// Problem Name: B. Sereja and Suffixes
// Problem link: https://codeforces.com/problemset/problem/368/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> v;
    set<int> st;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    vector<int> ans(n + 1);
    for(int i = n - 1; i >= 0; i--) {
        st.insert(v[i]);
        ans[i] = st.size();
    }   

    while(m--) {
        int a; cin >> a;
        cout << ans[a - 1] << '\n';
    }
    
    return 0;
}