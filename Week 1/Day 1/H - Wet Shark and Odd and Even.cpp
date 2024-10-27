// Problem: H - Wet Shark and Odd and Even
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v;

    long long sm = 0;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
        sm += a;
    }

    if(sm % 2 == 0) {
        cout << sm << '\n';
        return 0;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        if((sm - v[i]) % 2 == 0) {
            cout << sm - v[i] << '\n';
            return 0;
        }
    }
    
    return 0;
}