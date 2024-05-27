#include <bits/stdc++.h>
using namespace std;

int t, l, n;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        cin >> l >> n;

        int min = 0;
        int max = 0;

        while(n--) {
            int a;
            cin >> a;
            int minVal = std::min((l - a), (a - 0));
            if (minVal > min) min = minVal;

            int maxVal = std::max((l - a), (a - 0));
            if (maxVal > max) max = maxVal;
        }
        cout << min << ' ' << max << '\n';
    }
}
