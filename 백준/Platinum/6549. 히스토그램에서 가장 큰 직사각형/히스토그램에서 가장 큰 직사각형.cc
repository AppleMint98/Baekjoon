#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        long long hist[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> hist[i];
        }
        hist[n] = -1;
        
        long long ans = hist[0];
        stack<int> S;

        for (int i = 0; i <= n; i++) {
            while(!S.empty() && hist[i] < hist[S.top()]) {
                int height = S.top();
                S.pop();

                int weight;
                if (S.empty()) {
                    weight = i;
                } else {
                    weight = i - S.top() - 1;
                }
                ans = max(ans, hist[height] * weight);
            }

            S.push(i);
        }

        cout << ans << '\n';
    }
}
