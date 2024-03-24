#include <bits/stdc++.h>
using namespace std;

int n, m;
int mn = 0x7fffffff;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    int nums[n] = {0};
    for (int i = 0; i < n; i++) cin >> nums[i];
    sort(nums, nums + n);

    int en = 0;
    for (int st = 0; st < n; st++) {
        while(en < n && nums[en] - nums[st] < m) en++;
        if(en ==n) break;
        mn = min(mn, nums[en] - nums[st]);
    }
    cout << mn;
}
