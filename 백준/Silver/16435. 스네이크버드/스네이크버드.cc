#include <bits/stdc++.h>
using namespace std;

int n, l;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> l;
    vector<int> fruits(n);

    for (int i = 0; i < n; i++) {
        cin >> fruits[i];
    }

    sort(fruits.begin(), fruits.end());

    for (auto i: fruits) {
        if (l >= i) l++;
        else break;
    }

    cout << l;
}

