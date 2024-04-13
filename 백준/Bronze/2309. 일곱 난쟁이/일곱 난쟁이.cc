#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nums[9];
    int sum = 0;
    for (int & num : nums) {
        cin >> num;
        sum += num;
    }
    sort(nums, nums + 9);

    int ans = sum - 100;

    int left = 0, right = 8;
    int tmp = nums[left] + nums[right];

    while (true) {
        if (tmp < ans) {
            left++;
            tmp = nums[left] + nums[right];
        } else if (tmp > ans) {
            right--;
            tmp = nums[left] + nums[right];
        } else {
            break;
        }
    }

    nums[left] = 0;
    nums[right] = 0;

    for (int i = 0; i < 9; i++) {
        if (nums[i] != 0) {
            cout << nums[i] << '\n';
        }
    }

}