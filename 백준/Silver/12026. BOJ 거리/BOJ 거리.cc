#include <bits/stdc++.h>
using namespace std;

int n;
char road[1005];
int dp[1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> road[i];
        dp[i] = 1e9;
    }

    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        if (road[i] == 'B') {
            for (int j = i + 1; j < n; j++) {
                if (road[j] == 'O') {
                    dp[j] = min(dp[j], (j - i) * (j - i) + dp[i]);
                }
            }
        } else if (road[i] == 'O') {
            for (int j = i + 1; j < n; j++) {
                if (road[j] == 'J') {
                    dp[j] = min(dp[j], (j - i) * (j - i) + dp[i]);
                }
            }
        } else { // (road[i] = 'J')
            for (int j = i + 1; j < n; j++) {
                if (road[j] == 'B') {
                    dp[j] = min(dp[j], (j - i) * (j - i) + dp[i]);
                }
            }
        }
    }
    
    if (dp[n - 1] == 1e9) cout << -1;
    else { cout << dp[n - 1]; }
    return 0;
}