// Problem: A. Make it White
// Link: https://codeforces.com/problemset/problem/1927/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        vector<int> v;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') v.push_back(i + 1);
        }

        cout << v[v.size() - 1] - v[0] + 1 << '\n';
    }
    
    return 0;
}