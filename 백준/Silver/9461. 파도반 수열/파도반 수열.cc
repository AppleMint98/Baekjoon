#include <bits/stdc++.h>
using namespace std;

int n;
long long dp[105];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;


    for (int i = 5; i <= 100; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    while(n--) {
        int t;
        cin >> t;
        cout << dp[t] << '\n';
    }

    return 0;
}