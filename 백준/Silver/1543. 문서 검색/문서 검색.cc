#include <bits/stdc++.h>
using namespace std;

int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);

    int ans = 0;

    for (int i = 0; i < str1.length(); i++) {
        if (str2.length() > str1.length() - i) break;
        string tmp = str1.substr(i, str2.length());
        if (tmp == str2) {
            ans++;
            i += str2.length() - 1;
        }
    }
    cout << ans;
}
