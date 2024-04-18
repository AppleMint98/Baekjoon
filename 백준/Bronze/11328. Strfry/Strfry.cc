#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--) {

        string s1, s2;
        cin >> s1 >> s2;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2) {
            cout << "Possible" << '\n';
        } else {
            cout << "Impossible" << '\n';
        }

    }
}