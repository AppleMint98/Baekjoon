#include <bits/stdc++.h>
using namespace std;

int n, m, k;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;

    int hands[n][m] = {};
    vector<long long> sum(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> hands[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            sum[i] += hands[i][j];
            if (sum[i] >= k) {
                cout << (i + 1) << ' ' << (j + 1);
                return 0;
            }
        }
    }
}