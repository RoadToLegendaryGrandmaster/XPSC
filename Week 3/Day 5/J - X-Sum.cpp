// Problem Name: J - X-Sum
// Problem link: https://vjudge.net/contest/670883#problem/J
#include <bits/stdc++.h>

using namespace std;

int n, m;
int dx[4] = {1, -1, -1, 1};
int dy[4] = {1, 1, -1, -1};

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m) {
        return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        cin >> n >> m;
        int arr[n][m];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int sm = arr[i][j];
                for(int k = 0; k < 4; k++) {
                    int xi = i + dx[k];
                    int xj = j + dy[k];
                    while(valid(xi, xj)) {
                        sm += arr[xi][xj];
                        xi += dx[k];
                        xj += dy[k];
                    }
                }
                
                ans = max({ans, sm});
            }
        }

        cout << ans << '\n';
    }

    return 0;
}