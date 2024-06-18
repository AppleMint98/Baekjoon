#include <bits/stdc++.h>
using namespace std;

string str;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;

    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    int cnt = 0;

    for (auto s : str) {
        for (auto v : vowels) {
            if (s == v) cnt++;
        }
    }

    cout << cnt;

    return 0;
}