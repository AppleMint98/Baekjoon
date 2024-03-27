#include <bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, int> s2i;
    string i2s[100005];

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> i2s[i];
        s2i[i2s[i]] = i;
    }

    while (m--) {
        string query;
        cin >> query;
        // isdigit() -> 앞이 숫자 인지 판별 , stoi -> string to int
        if (isdigit(query[0])) cout << i2s[stoi(query)] << '\n';
        else cout << s2i[query] << '\n';
    }
}
