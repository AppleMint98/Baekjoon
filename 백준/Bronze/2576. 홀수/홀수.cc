#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0;
    int min = 101;
    for (int i = 0; i < 7; i++) {
        int odd;
        cin >> odd;
        if (odd % 2 == 1) {
            sum += odd;
            if (min > odd) {
                min = odd;
            }
        }
    }

    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << '\n';
        cout << min << '\n';    
    }
}