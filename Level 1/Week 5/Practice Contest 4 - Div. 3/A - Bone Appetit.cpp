// Problem Name: A - Bone Appetit
// Problem link: https://vjudge.net/contest/675228#problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, m; cin >> n >> m;
    int x, y; cin >> x >> y;

    cout << (n * x) + (m * y) << '\n';
    
    return 0;
}