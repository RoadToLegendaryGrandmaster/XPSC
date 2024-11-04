// Problem Name: D - Spell Check
// Problem link: https://vjudge.net/contest/669017#problem/D
#include <bits/stdc++.h>

using namespace std;


bool exist(string& a, int n) {
    string s = "Timur";
    sort(a.begin(), a.end());
    sort(s.begin(), s.end());
    return n == 5 && s == a;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        if(exist(s, n)) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    

    return 0;
}
