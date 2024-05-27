#include <bits/stdc++.h>
using namespace std;

int t;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        deque<char> D;
        for (int i = 0; i < n; i++) {
            char k;
            cin >> k;
            if (!D.empty() && k <= D.front()) {
                D.push_front(k);
            } else {
                D.push_back(k);
            }
        }

        while (!D.empty()) {
            cout << D.front();
            D.pop_front();
        }
        cout << '\n';
    }
}
