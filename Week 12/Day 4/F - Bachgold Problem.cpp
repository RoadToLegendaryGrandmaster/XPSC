// Problem name: F - Bachgold Problem
// Problem link: https://vjudge.net/contest/685500#problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v;

    while(true) {
        if(n == 3 || n <= 2) {
            v.push_back(n);
            break;
        }
        else {
            n -= 2;
            v.push_back(2);
        }
    }

    cout << v.size() << '\n';
    for(auto & x: v) cout << x << ' ';
    cout << '\n';
     
    return 0;
}
