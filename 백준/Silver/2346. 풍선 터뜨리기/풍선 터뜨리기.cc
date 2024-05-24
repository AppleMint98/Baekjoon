#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<pair<int,int>> D;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        D.emplace_back(i + 1, k);
    }


    while (!D.empty()) {
        
        int cur = D.front().second;
        cout << D.front().first << " ";
        D.pop_front();

        if (D.empty()) break;

        if (cur > 0) {
            for (int i = 0; i < cur - 1; i++) {
                D.push_back(D.front());
                D.pop_front();
            }
        } else {
            for (int i = 0; i < (-1) * cur; i++) {
                D.push_front(D.back());
                D.pop_back();
            }
        }
        
    }
    return 0;
}