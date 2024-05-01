#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;

    while (n--) {
        string str;
        cin >> str;

        deque<int> DQ;

        for (auto i : str) {
            if (!DQ.empty() && DQ.back() == i) {
                DQ.pop_back();
            } else {
                DQ.push_back(i);
            }
        }


        if (DQ.empty()) {
            ans++;
        } else {
            continue;
        }
    }

    cout << ans;
}
