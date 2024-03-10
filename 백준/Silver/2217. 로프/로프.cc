#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n);

    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] * (n - i) >= ans) {
            ans = nums[i] * (n - i);
        }
    }
    cout << ans;
}