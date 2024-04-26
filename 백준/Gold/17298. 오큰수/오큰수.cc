#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<pair<int,int>> S;

    int n;
    cin >> n;
    vector<int> ans(n, -1);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        while (!S.empty() && S.top().first < k) {
            ans[S.top().second] = k;
            S.pop();
        }
        S.emplace(k, i); // S.push({k,i});
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
}
