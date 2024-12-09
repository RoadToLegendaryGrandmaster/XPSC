// problem name: D - Split Permutation
// problem link: https://vjudge.net/contest/678599#problem/D

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set<int> st;
        for(int i = 1; i <= n; i++) {
            st.insert(i);
        }


        deque<int> ans;

        if(n % 2 == 1) {
            ans.push_back(n);
            st.erase(n);
        }

        while(!st.empty()) {
            int a = *st.begin();
            int b = *(--st.end());

            ans.push_front(a);
            ans.push_front(b);
            
            st.erase(a);
            st.erase(b);
        }

        for(int i = 0; i < n; i++) {
            cout << ans[i] << ' ';
        }

        cout << '\n';
    }
     
    return 0;
}
