#include <bits/stdc++.h>
using namespace std;

int n, m, x;
int board[105][105];
bool vis[105][105];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            vis[i][j] = false;
        }
    }
    cin >> x;

    queue<pair<int,int>> Q;
    Q.push({0, 0});
    vis[0][0] = true;

    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();

        for (int i = -x; i <= x; i++) {
            for (int j = -x; j <= x; j++) {
                if (abs(i) + abs(j) > x) continue;

                int nx = cur.first + i;
                int ny = cur.second + j;
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (board[0][0] != board[nx][ny]) continue;
                if (vis[nx][ny]) continue;

                vis[nx][ny] = true;
                Q.push({nx, ny});
            }
        }
    }
    if (vis[n - 1][m - 1]) cout << "ALIVE";
    else { cout << "DEAD"; }

    return 0;
}
