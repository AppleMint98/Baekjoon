#include <bits/stdc++.h>
using namespace std;

int sum = 0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            int a;
            cin >> a;
            sum += a;
        }
        if (sum == 0) {
            cout << "D" << '\n';
        }
        if (sum == 1) {
            cout << "C" << '\n';
        }
        if (sum == 2) {
            cout << "B" << '\n';
        }
        if (sum == 3) {
            cout << "A" << '\n';
        }
        if (sum == 4) {
            cout << "E" << '\n';
        }
        sum = 0;
    }
}