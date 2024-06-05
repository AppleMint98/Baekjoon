#include <bits/stdc++.h>
using namespace std;

int n;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = 1;
    int cnt_inc = 1;
    int cnt_dec = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i - 1] <= nums[i]) {
            cnt_inc++;
        } else {
            cnt_inc = 1;
        }

        if (nums[i - 1] >= nums[i]) {
            cnt_dec++;
        } else {
            cnt_dec = 1;
        }

        ans = max(ans, max(cnt_inc, cnt_dec));
    }

    cout << ans;
}
