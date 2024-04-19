#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    list<char> L;
    for (auto c : str) L.push_back(c);
    auto t = L.end();

    int n;
    cin >> n;
    while (n--) {
        char c;
        cin >> c;
        if (c == 'L') {
            if (t != L.begin()) t--;
        }
        if (c == 'D') {
            if (t != L.end()) t++;
        }
        if (c == 'B') {
            if (t != L.begin()) {
                t--;
                t = L.erase(t);
            }
        }
        if (c == 'P') {
            char i;
            cin >> i;
            L.insert(t, i);
        }
    }

    for (auto i : L) cout << i;
}