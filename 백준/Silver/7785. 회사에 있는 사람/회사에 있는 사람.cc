#include <bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, string> m;
    // 2 <= n <= 10^6

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a;
        string b;
        cin >> a >> b;
        if (b == "enter") {
            m[a] = b;
        } else if (b == "leave") {
            m.erase(a);
        }
    }

    vector<string> names;

    for (auto s: m) {
        names.push_back(s.first);
    }

    sort(names.rbegin(), names.rend());

    for (auto s: names) {
        cout << s << '\n';
    }
}
