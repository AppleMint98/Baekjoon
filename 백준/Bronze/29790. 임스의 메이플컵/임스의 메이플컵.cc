#include <bits/stdc++.h>
using namespace std;

int n, u, l;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> u >> l;

    if (n >= 1000) {
        if (u >= 8000 || l >= 260) cout << "Very Good";
        else cout << "Good";
    } else cout << "Bad";

    return 0;
}