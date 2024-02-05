#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<char> S;
    char beforeChar;
    int cnt = 0;

    string s;
    getline(cin, s);
    for (char c: s) {
        if (c == '(') {
            S.push(c);
        } else {
            S.pop();
            if (beforeChar == '(') {
                cnt += S.size();
            } else {
                cnt += 1;
            }
        }
        beforeChar = c;
    }
    cout << cnt;
}