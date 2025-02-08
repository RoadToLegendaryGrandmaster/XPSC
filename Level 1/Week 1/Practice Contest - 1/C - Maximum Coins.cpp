// Problem: C - Maximum Coins 
// Link: https://www.codechef.com/problems/MAXCOIN
#include <bits/stdc++.h>

using namespace std;

int sm(int n, int w) {
    int res = 0;
    while(w--) {
        res += pow(2, n);
        n--;
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        int los = n - x;

        int c = sm(n, x);
        int d = sm(los, los);
        
        cout << c - d << '\n';
    }
    
    return 0;
}