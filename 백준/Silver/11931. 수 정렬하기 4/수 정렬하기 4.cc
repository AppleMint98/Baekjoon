#include <bits/stdc++.h>
using namespace std;

int n;

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

    sort(nums.rbegin(), nums.rend());

    for (int i = 0; i < n; i++) {
        cout << nums[i] << '\n';
    }
}
