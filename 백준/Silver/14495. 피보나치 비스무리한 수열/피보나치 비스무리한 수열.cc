#include <bits/stdc++.h>
using namespace std;

int n;

int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    long long dp[120] = {};

    dp[1] = 1, dp[2] = 1, dp[3] = 1;

    for (int i = 4; i < 120; i++) {
        dp[i] = dp[i - 1] + dp[i - 3];
    }
    cout << dp[n];
}
