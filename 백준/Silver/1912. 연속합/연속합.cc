#include <bits/stdc++.h>
using namespace std;

int n;
int dp[100005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        nums.push_back(k);
    }

    dp[0] = nums[0];
    int maxValue = nums[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max((dp[i - 1] + nums[i]),(nums[i]));
        if (dp[i] > maxValue) maxValue = dp[i];
    }

//    for (int i = 0; i < n; i++) {
//        cout << dp[i] << ' ';
//    }
//    cout << '\n';
    cout << maxValue;
}
