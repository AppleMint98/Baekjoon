#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--) {
        list<char> L;
        auto t = L.begin();

        string str;
        cin >> str;

        for (auto i : str) {
            if (i == '<') {
                if (t != L.begin()) t--;
            } else if (i == '>') {
                if (t != L.end()) t++;
            } else if (i == '-') {
                if (t != L.begin()) {
                    t = L.erase(prev(t));   
                }
            } else {
                L.insert(t, i);
            }
        }

        for (auto i: L) cout << i;
        cout << '\n';
    }
}