#include <bits/stdc++.h>
using namespace std;



long long gcd(long long a, long long b) {
    if (a==0) return b;
    return gcd(b % a, a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long a, b;
        cin >> a >> b;
        cout << a / gcd(a, b) * b << '\n';
    }
}
