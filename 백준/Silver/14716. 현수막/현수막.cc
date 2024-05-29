#include <bits/stdc++.h>
using namespace std;

int n, m;
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, -1, 0, 1, 1, -1, 1, -1};


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    int board[n][m];
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
            if (board[i][j] == 0 || vis[i][j]) continue;
            queue<pair<int,int>> Q;
            Q.push({i, j});
            vis[i][j] = true;
            while (!Q.empty()) {
                auto cur = Q.front();
                Q.pop();
                for (int k = 0; k < 8; k++) {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (vis[nx][ny] || board[nx][ny] == 0) continue;

                    Q.push({nx, ny});
                    vis[nx][ny] = true;
                }
            }
            ans++;
        }
    }

    cout << ans;

}
