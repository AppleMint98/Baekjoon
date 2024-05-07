#include <bits/stdc++.h>
using namespace std;

int m, n, k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> m >> n >> k;

    int board[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            board[i][j] = 1;
        }
    }

    for (int i = 0; i < k; i++) {
        int dlx, dly, urx, ury;
        cin >> dlx >> dly >> urx >> ury;

        for (int j = dlx; j < urx; j++) {
            for (int l = dly; l < ury; l++) {
                board[j][l] = 0;
            }
        }
    }


    bool vis[n][m] = {};
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    int cnt = 0;
    vector<int> areas;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0 || vis[i][j]) continue;
            cnt++;
            queue<pair<int, int>> Q;
            Q.push({i, j});
            vis[i][j] = true;
            int area = 0;

            while (!Q.empty()) {
                area++;
                pair<int, int> cur = Q.front();
                Q.pop();

                for (int k = 0; k < 4; k++) {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];

                    if (nx >= n || nx < 0 || ny >= m || ny < 0) continue;
                    if (vis[nx][ny] || board[nx][ny] != 1) continue;

                    vis[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }
            areas.push_back(area);
        }
    }

    sort(areas.begin(), areas.end());

    cout << cnt << '\n';
    for (auto area: areas) {
        cout << area << ' ';
    }
};
