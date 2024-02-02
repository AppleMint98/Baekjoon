#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long cnt = 0;
    stack<int> S;

    int t;
    cin >> t;
    S.push(t);

    for (int i = 1; i < n; i++) {
        int c;
        cin >> c;
        while (!S.empty() and S.top() <= c) {
            S.pop();
        }
        cnt += S.size();
        S.push(c);
    }
    cout << cnt;
}