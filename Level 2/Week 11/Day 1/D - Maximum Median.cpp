// Problem name: D - Maximum Median
// Problen link: https://vjudge.net/contest/683822#problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++) {
    	int a; cin >> a;
    	v.push_back(a);
    }

    sort(v.begin(), v.end());

    auto ok = [&](long long median) {
    	long long cnt = 0;
    	for(int i = (n / 2); i < n; i++) {
    		cnt += (v[i] < median ? (median - v[i]) : 0);
    	}

    	return cnt <= k;
    };

    long long l = 1, r = 2e9, mid, ans;
    while(l <= r) {
    	mid = (l + r) / 2;
    	if(ok(mid)) {
    		ans = mid;
    		l = mid + 1;
    	}
    	else {
    		r = mid - 1;
    	}
    }

    cout << ans << '\n';
     
    return 0;
}
