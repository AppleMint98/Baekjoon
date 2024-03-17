#include <bits/stdc++.h>
using namespace std;

int dp[1002][1002];
int mod = 10007;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 1000; i++) {
        dp[i][0] = dp[i][i] = 1;
        for (int j = 1; j < i; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
        }
    }

    int n, m;
    cin >> n >> m;
    cout << dp[n][m];
}
