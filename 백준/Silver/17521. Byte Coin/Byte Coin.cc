#include <bits/stdc++.h>
using namespace std;

long long n;
long long w;
long long coins = 0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> w;
    long long days[n + 1] = {};
    for (int i = 0; i < n; i++) {
        cin >> days[i];
    }

    for (int i = 0; i < n; i++) {
        if (days[i + 1] > days[i]) {
            coins += (w / days[i]);
            w %= days[i];
        } else {
            w += (coins * days[i]);
            coins = 0;
        }
    }
    cout << w;
}
