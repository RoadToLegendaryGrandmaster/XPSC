// problem name: C. Closest to the Right
//Problem link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &v, int k) {
    int l = 0;
    int r = v.size() - 1;
    int ans = -1;
    while(l <= r) {
        int mid = (r + l) / 2;
        if(k <= v[mid]) {
            ans = mid;
            r = mid - 1;   
        }
        else {
            l = mid + 1;
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
            cout << v.size() + 1 << '\n';
        }
        else {
            cout << ans + 1 << '\n';
        }
    }
     
    return 0;
}
