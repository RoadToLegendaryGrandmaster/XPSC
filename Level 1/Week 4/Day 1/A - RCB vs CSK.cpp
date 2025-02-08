// Problem Name: A - RCB vs CSK
// Problem link: https://vjudge.net/contest/672779#problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int x, y; cin >> x >> y;
    if(x - y >= 18) {
        cout << "RCB" << '\n';
    }     
    else {
        cout << "CSK" << '\n';
    }
    
    return 0;
}