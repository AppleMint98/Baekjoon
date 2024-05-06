#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int ans = 0;
    int tmp = 1;
    char before;
    stack<char> S;

    for (auto c: str) {

        if (c == '(') {
            tmp *= 2;
            S.push(c);
            before = '(';
        }

        else if (c == '[') {
            tmp *= 3;
            S.push(c);
            before = '[';
        }

        else if (c == ')') {
            if (S.empty() || S.top() != '(') {
                cout << 0;
                return 0;
            }
            if (before == '(') {
                ans += tmp;
            }
            S.pop();
            before = ')';
            tmp /= 2;

        } else { // c == ']'
            if (S.empty() || S.top() != '[') {
                cout << 0;
                return 0;
            }
            if (before == '[') {
                ans += tmp;
            }
            S.pop();
            before = ']';
            tmp /= 3;
        }
    }

    if (!S.empty()) cout << 0;
    else cout << ans;
}
