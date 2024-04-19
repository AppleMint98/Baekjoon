#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    list<int> L;
    for (int i = 1; i <= n; i++) {
        L.push_back(i);
    }
//    for (auto i : L) cout << i << ' ';
    auto t = L.begin();

    cout << '<';
    while (!L.empty()) {
        for (int i = 1; i < k; i++) {
            if (++t == L.end()) {
                t = L.begin();
            }
        }

        if (L.size() == 1) {
            cout << *t;
        } else {
            cout << *t << ',' << ' ';
        }

        t = L.erase(t);
        if (t == L.end()) {
            t = L.begin();
        }

    }
    cout << '>';
}
