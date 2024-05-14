#include <bits/stdc++.h>
using namespace std;

int board[102][102][102];
int dist[102][102][102];
int n, m, h;

int dz[6] = {0, 0, 0, 0, 1, -1};
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};

struct Point {
    int z;
    int x;
    int y;
};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n >> h;

    queue<Point> Q;

    /*
     * 모든 시작점을 큐에 넣고 BFS
     */

    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[k][i][j];
                if (board[k][i][j] == 1) Q.push({k, i, j});
                if (board[k][i][j] == 0) dist[k][i][j] = -1;
                else dist[k][i][j] = 0;
            }
        }
    }

    while (!Q.empty()) {
        auto cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 6; dir++) {
            int nz = cur.z + dz[dir];
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];
            if (nz < 0 || nz >= h || nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (dist[nz][nx][ny] >= 0) continue;
            dist[nz][nx][ny] = dist[cur.z][cur.x][cur.y] + 1;
            Q.push({nz, nx, ny});
        }
    }

    int ans = 0;
    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (dist[k][i][j] == -1) {
                    cout << -1;
                    return 0;
                }
                ans = max(ans, dist[k][i][j]);
            }
        }
    }
    cout << ans;
}
