#include <bits/stdc++.h>
using namespace std;


int n, k;

int sieve(int n, int k){
    int ans;
    vector<bool> states(n + 1, true);
    int cnt = 0;

    for (int i = 2; i <= n; i++) {
        if(!states[i]) continue;

        else {
            cnt += 1;
            if (cnt == k) {
                ans = i;
                return ans;
            }
        }

        for (int j = 2 * i; j <= n; j += i) {
            if (states[j]) {
                states[j] = false;
                cnt += 1;
                if (cnt == k) {
                    ans = j;
                    return ans;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    cin >> n >> k;
    int ans = sieve(n, k);
    cout << ans;
}
