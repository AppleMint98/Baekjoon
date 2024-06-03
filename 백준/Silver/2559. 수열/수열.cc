#include <bits/stdc++.h>
using namespace std;

int n, k;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        cin >> temp[i];
    }
    vector<int> cumulative(n + 1);
    cumulative[0] = 0;
    cumulative[1] = temp[0];
    for (int i = 2; i < n + 1; i++) {
        cumulative[i] = cumulative[i - 1] + temp[i - 1];
    }

//    for (auto i: cumulative) {
//        cout << i << ' ';
//    }

    int ans = -2e9;

    for (int i = k; i < n + 1; i++) {

        int tmp = cumulative[i] - cumulative[i - k];
        if (tmp > ans) ans = tmp;
    }
    cout << ans;
}

