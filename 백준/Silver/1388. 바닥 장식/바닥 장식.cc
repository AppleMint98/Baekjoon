#include <bits/stdc++.h>
using namespace std;

int n, m;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    char board[n][m];
    bool vis[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            vis[i][j] = false;
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == '-' && !vis[i][j])  {
                for (int k = j; k < m; k++) {
                    if (board[i][k] == '-') {
                        vis[i][k] = true;
                    } else {
                        break;
                    }
                }
                ans++;
            } else if (board[i][j] == '|' && !vis[i][j]) {
                for (int k = i; k < n; k++) {
                    if (board[k][j] == '|') {
                        vis[k][j] = true;
                    } else {
                        break;
                    }
                }
                ans++;
            }
        }
    }

    cout << ans;
}
