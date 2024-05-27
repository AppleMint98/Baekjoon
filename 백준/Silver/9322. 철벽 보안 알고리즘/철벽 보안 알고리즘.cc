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

        vector<string> key1(n);
        for (int i = 0; i < n; i++) {
            cin >> key1[i];
        }

        vector<int> key2(n);
        for (int i = 0; i < n; i++) {
            string target;
            cin >> target;
            auto it = find(key1.begin(), key1.end(), target);
            key2[i] = distance(key1.begin(), it);
        }

        vector<string> ans(n);
        for (int i = 0; i < n; i++) {
            string a;
            cin >> a;
            ans[key2[i]] = a;
        }

        for (auto i : ans) {
            cout << i << ' ';
        }
        cout << '\n';
    }
}

