// Problem: D - Change Please
// Link: https://www.codechef.com/problems/CHANGE_PLZ
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int d = 100 - n;
        cout << 10 * (d / 10) << '\n';
    }   
    
    return 0;
}