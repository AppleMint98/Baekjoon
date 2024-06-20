#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;

    for (int i = 0; i < 4; i++) {
        int k;
        cin >> k;
        ans += k;
    }
    cout << ans / 60 << '\n' << ans % 60;
}