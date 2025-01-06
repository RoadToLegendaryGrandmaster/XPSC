// Problem: B - Factory Machines
// Problem link: https://vjudge.net/contest/683822#problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, t; cin >> n >> t;
    vector<int> v;
    for(int i = 0; i < n; i++) {
    	int a; cin >> a;
    	v.push_back(a);
    }

    auto ok = [&](long long second) {
    	long long cnt = 0;
    	for(int i = 0; i < n; i++) {
    		cnt += (second / v[i]);

    		if(cnt >= t) {
    			return true;
    		}
    	}

    	return cnt >= t;
    };

    long long l = 0;
    long long r = 1e18;
    long long ans = 0;
    while(l <= r) {
    	long long mid = (l + r) / 2;
    	if(ok(mid)) {
    		ans = mid;
    		r = mid - 1;
    	}
    	else {
    		l = mid + 1;
    	}
    }

    cout << ans << '\n';
     
    return 0;
}
