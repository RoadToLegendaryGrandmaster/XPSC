// Problem Name: C. Berpizza
// Problem link: https://codeforces.com/contest/1468/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int q; cin >> q;
    set<pair<int, int>> st;
    multiset<pair<int, int>> mst;
    vector<int> ans;
    int i = 1;
    while(q--) {
        int t; cin >> t;
        if(t == 1) {
            int m; cin >> m;
            st.insert({i, m});
            mst.insert({m, -i});
            i++;
        }
        else if(t == 2) {
            int pos = st.begin()->first;
            int m = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            mst.erase({m, -pos});
        }
        else {
            int pos = -mst.rbegin()->second;
            int m = mst.rbegin()->first;
            ans.push_back(pos);
            mst.erase(--mst.end());
            st.erase({pos, m});
        }
    }

    for(auto& x: ans) {
        cout << x << ' ';
    }

    cout << '\n';
    
    return 0;
}