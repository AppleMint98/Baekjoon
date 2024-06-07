#include <bits/stdc++.h>
using namespace std;

int d, k;
long long a[35];
long long b[35];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> d >> k;
    a[1] = 1, a[2] = 0;
    b[1] = 0, b[2] = 1;
    for (int i = 3; i < 35; i++) {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }

    for (int i = 1; i <= (k / a[d]); i++) {
        if ((k - (a[d] * i)) % b[d] == 0) {
            cout << i << '\n' << ((k - (a[d] * i)) / b[d]);
            return 0;
        }
    }
}
