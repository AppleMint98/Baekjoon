#include <bits/stdc++.h>
using namespace std;

int n, k;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    unordered_set<string> S;
    vector<string> nums;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        nums.push_back(t);
    }
    sort(nums.begin(), nums.end());

    do {
        string str;
        for (int i = 0; i < k; i++) {
            str += nums[i];
        }
        S.insert(str);
    } while (next_permutation(nums.begin(), nums.end()));

    cout << S.size();
}
