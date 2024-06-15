#include <bits/stdc++.h>
using namespace std;

int t;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    vector<string> ans = {"0123", "0145", "2367", "1357", "0246", "4567"};

    while(t--) {
        vector<char> nums(4);
        for (int i = 0; i < 4; i++) {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());

        string str;
        for (auto i : nums) {
            str += i;
        }

        bool b = false;
        for (auto a : ans) {
            if (a == str) {
                b = true;
                break;
            }
        }

        if (b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}