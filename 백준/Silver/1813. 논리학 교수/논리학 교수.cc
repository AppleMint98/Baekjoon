#include <bits/stdc++.h>
using namespace std;

int n;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    int cnt[51] = {};
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        cnt[t]++;
    }

    int ans = -1;
    for (int i = 0; i < 51; i++) {
        if (i == cnt[i]) ans = i;
    }

    cout << ans;
}
