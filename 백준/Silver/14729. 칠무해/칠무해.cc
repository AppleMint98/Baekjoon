#include <bits/stdc++.h>
using namespace std;

int n;

int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    vector<double> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < 7; i++) {
        cout << fixed << setprecision(3) << nums[i] << '\n';
    }

}
