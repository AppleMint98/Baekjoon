#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> nums(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
    }

    int ans = 0;
    for (int i = n; i > 0; i--) {
        if (nums[i] > nums[i - 1]) continue;
        else {
            ans += (nums[i - 1] - nums[i] + 1);
            nums[i - 1] -= (nums[i - 1] - nums[i] + 1);
        }
    }

    cout << ans;
    return 0;
}
