// Problem name: A - Turtle and Piggy Are Playing a Game 2
// Problme link: https://vjudge.net/contest/681187#problem
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        cout<< v[n / 2] << '\n';
    }
     
    return 0;
}
