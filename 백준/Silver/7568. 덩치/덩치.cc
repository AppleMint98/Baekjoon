#include <bits/stdc++.h>
using namespace std;

int n;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<pair<int, int>> people(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        people[i] = {a, b};
    }

    int cnt;
    for (int i = 0; i < n; i++) {
        cnt = 1;
        for (int j = 0; j < n; j++) {
            if (people[i].first < people[j].first && people[i].second < people[j].second)
                cnt++;
        }
        cout << cnt << '\n';
    }

}



