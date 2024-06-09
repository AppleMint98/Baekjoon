#include <bits/stdc++.h>
using namespace std;

int n;
char d;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> d;

    int ans = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == d) ans++;
        }
    }

    cout << ans;
}

