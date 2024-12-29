// Problem name: A. Binary Search
// Problme link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
#include <bits/stdc++.h>

using namespace std;

bool search(vector<int> &v, int k) {
    int l = 0;
    int r = v.size() - 1;

    while(l <= r) {
        int mid = (r + l) / 2;
        if(k == v[mid]) {
            return true;
        }
        else if(k < v[mid]) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    return false;
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
        if(search(v, q)) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
     
    return 0;
}
