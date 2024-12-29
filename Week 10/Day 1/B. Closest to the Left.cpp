// Problem name: B. Closest to the Left
// Problem link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &v, int k) {
    int l = 0;
    int r = v.size() - 1;
    int ans = -1;
    while(l <= r) {
        int mid = (r + l) / 2;
        if(k >= v[mid]) {
            ans = mid;
            l = mid + 1;   
        }
        else {
            r = mid - 1;
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    while(k--) {
        int q; cin >> q;
        int ans = search(v, q);
        if(ans == -1) {
            cout << 0 << '\n';
        }
        else {
            cout << ans + 1 << '\n';
        }
    }
     
    return 0;
}
