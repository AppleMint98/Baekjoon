#include <bits/stdc++.h>
using namespace std;


int idx[2000001] = {0};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        idx[n+1000000] += 1;
    }

    for (int i = 0; i < sizeof(idx)/sizeof(*idx); i++) {
        if (idx[i] == 0) {
            continue;
        } else {
            for (int j = 0; j < idx[i]; j++) {
                cout << i-1000000 << '\n';
            }
        }
    }

}
