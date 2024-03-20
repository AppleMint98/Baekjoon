#include <bits/stdc++.h>
using namespace std;



int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i = 5;
    int ans = 0;

    while (i--) {
        int num;
        cin >> num;

        if (num < 40) ans += 8;
        else ans += num/5;
    }

    cout << ans;
}
