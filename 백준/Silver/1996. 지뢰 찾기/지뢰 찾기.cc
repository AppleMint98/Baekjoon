#include <bits/stdc++.h>
using namespace std;

int n;
int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[8] = {0, 1, -1, 1, -1, 0, 1, -1};
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    char board[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    char ans[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '.') {
                int cnt = 0;

                for (int k = 0; k < 8; k++) {
                    int nx = dx[k] + i;
                    int ny = dy[k] + j;
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (board[nx][ny] == '.') continue;
                    cnt += board[nx][ny] - '0';
                }

                if (cnt >= 10) ans[i][j] = 'M';
                else ans[i][j] = cnt + '0';

            } else {
                ans[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j];
        }
        cout << '\n';
    }
}