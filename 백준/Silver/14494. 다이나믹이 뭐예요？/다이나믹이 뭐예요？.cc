#include <bits/stdc++.h>
using namespace std;

int n, m;
long long dp[1005][1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < 1005; i++) {
        dp[i][0] = 0;
        dp[0][i] = 0;
    }
    dp[0][0] = 1;

    for (int i = 1; i < 1005; i++) {
        for (int j = 1; j < 1005; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + dp[i - 1][j - 1]) % 1000000007;
        }

    }

    cout << dp[n][m];


}
