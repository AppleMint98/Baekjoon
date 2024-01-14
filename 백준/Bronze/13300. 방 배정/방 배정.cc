# include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    int array[2][6] = {0};
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int s, y;
        cin >> s >> y;
        array[s][y-1]++;
    }
    int ans = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 2; j++) {
            ans += array[j][i] / k;
            if (array[j][i] % k != 0) {
                ans++;
            }
        }
    }

    cout << ans;
}