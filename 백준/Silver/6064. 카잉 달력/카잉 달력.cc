#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int m, n, x, y;
        cin >> m >> n >> x >> y;
        int ans = -1;
        if (x == m) x = 0;
        if (y == n) y = 0;
        for (int i = x; i <= lcm(m, n); i += m) {
            if (i == 0) continue;
            if (i % n == y) {
                ans = i;
            }
        }
        cout << ans << '\n';
    }
}
