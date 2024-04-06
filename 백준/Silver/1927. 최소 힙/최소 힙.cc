#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x > 0) {
            pq.push(x);
        }
        if (x == 0) {
            if (pq.empty()) {
                cout << 0 << '\n';
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
}