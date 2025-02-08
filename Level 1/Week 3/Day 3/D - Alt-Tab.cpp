// Problem Name: D - Alt-Tab
// Problem link: https://vjudge.net/contest/670883#problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    stack<string> st;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        st.push(s);
    }

    map<string, bool> mp;
    vector<string> ans;
    while(!st.empty()) {
        string t = st.top();
        if(mp.find(t) == mp.end()) {
            ans.push_back(t);
            mp[t] = true;
        }

        st.pop();
    }

    for(auto& x: ans) {
        int sz = x.size();
        cout << x[sz - 2] << x[sz - 1];
    }

    cout << '\n';

    return 0;
}