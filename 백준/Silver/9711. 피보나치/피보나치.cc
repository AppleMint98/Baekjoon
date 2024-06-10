#include <bits/stdc++.h>
using namespace std;

int t;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;

    for (int k = 1; k <= t; k++) {
        long long p, q;
        cin >> p >> q;

        if (p == 1) {
            cout << "Case #" << k << ": " << 1 % q << '\n';
            continue;
        }
        vector<long long> dp(p + 1, 0);
        dp[1] = 1;
        for (int i = 2; i <= p; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2]) % q;
        }
        cout << "Case #" << k << ": " << dp[p] << '\n';
    }
}
