// Problem: B. Chat Order
// Link: https://codeforces.com/problemset/problem/637/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    vector<string> v;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        v.push_back(s);
    }

    reverse(v.begin(), v.end());

    map<string, int> mp;
    for(int i = 0; i < n; i++) {
        if(mp.find(v[i]) == mp.end()) {
            cout << v[i] << '\n';
            mp[v[i]]++;
        }
    }
    
    return 0;
}