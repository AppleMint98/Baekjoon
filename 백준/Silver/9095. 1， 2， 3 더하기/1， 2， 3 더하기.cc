#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1000005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 11; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    while(n--) {
        int k;
        cin >> k;
        cout << dp[k] << '\n';
    }
}