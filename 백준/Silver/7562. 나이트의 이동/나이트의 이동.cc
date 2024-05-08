#include <bits/stdc++.h>
using namespace std;


int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--) {
        int l; // 4 <= l <= 300
        cin >> l;

        int dist[l][l];
        for (int i = 0; i < l; i++) {
            fill(dist[i], dist[i] + l, 1e9);
        }

        int sx, sy, ex, ey;;
        cin >> sx >> sy >> ex >> ey;


        queue<pair<int,int>> Q;
        Q.push({sx, sy});
        dist[sx][sy] = 0;

        while (!Q.empty()) {
            pair<int, int> cur = Q.front();
            Q.pop();
            for (int i = 0; i < 8; i++) {

                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];

                if (nx >= l || ny >= l || nx < 0 || ny < 0) continue;
                if (dist[nx][ny] <= dist[cur.first][cur.second] + 1) continue;

                dist[nx][ny] = dist[cur.first][cur.second] + 1;
                Q.push({nx, ny});
            }

        }

        cout << dist[ex][ey] << '\n';
    }
}