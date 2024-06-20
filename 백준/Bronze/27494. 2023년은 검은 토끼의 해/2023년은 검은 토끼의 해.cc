#include <bits/stdc++.h>
using namespace std;

int n;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);

        int pointer = 0;
        char number[4] = {'2', '0', '2', '3'};

        for (int j = 0; j < str.length(); j++) {
            if (str[j] == number[pointer]) pointer++;
            if (pointer >= 4) {ans++; break;}
        }
    }

    cout << ans;
    return 0;
}