#include <bits/stdc++.h>
using namespace std;

int n, m;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    map<string, string> M;

    while(n--) {
        string a, b;
        cin >> a >> b;
        M[a] = b;
    }

    while(m--) {
        string c;
        cin >> c;
        cout << M[c] << '\n';
    }

    return 0;
}