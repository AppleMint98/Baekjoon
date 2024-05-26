#include <bits/stdc++.h>
using namespace std;

int t;
long long dp[45];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < 45; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    sort(dp, dp + 45, greater<long long>());

    cin >> t;
    while(t--) {
        long long n;
        cin >> n;

        deque<long long> D;

        for (auto i : dp) {
            if (i == 0 || n == 0) break;
            if ((n / i) >= 1) {
                n -= i;
                D.push_front(i);
            }
        }

        for (auto i: D) {
            cout << i << ' ';
        }
        
        cout << '\n';
    }

}
