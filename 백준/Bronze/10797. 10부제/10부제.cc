#include <bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < 5; i++) {
        int t;
        cin >> t;
        if (t % 10 == n) {
            ans += 1;
        }
    }

    cout << ans;

}