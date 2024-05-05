#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;
        string ans = "NO";

        stack<char> S;
        for (auto i: str) {
            if (i == '(') S.push(i);
            else if (i == ')') {
                if (!S.empty() && S.top() == '(') {
                    S.pop();
                } else {
                    S.push(i);
                }
            }

        }

        if (S.empty()) {
            ans = "YES";
        }

        cout << ans << '\n';
    }
}
