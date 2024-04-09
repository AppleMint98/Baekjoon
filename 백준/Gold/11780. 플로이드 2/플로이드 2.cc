#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
// 더할 경우 overflow 발생할 수 있어서 0x7f7f7f7f 안씀

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int d[105][105];
    int nxt[105][105];

    for (int i = 1; i <= n; i++) {
        // 시작 위치, 끝 위치 , val 값으로 채우기
        fill(d[i], d[i] + 1 + n, INF);
        d[i][i] = 0;
    }

    // 시작 도시와 도착 도시를 연결하는 노선은 하나가 아닐 수 있음, min사용
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        d[a][b] = min(d[a][b], c);
        nxt[a][b] = b;
    }

    // 바로 가거나, 한 번 거쳐가거나 중에 작은값으로 계속 갱신
    // 플로이드 알고리즘 : d[i][j] = min(d[i][j], d[i][k] + d[k][j])
    // 경로 복원 : 경로 갱신 시 nxt[i][j] = nxt[i][k]
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (d[i][j] > d[i][k] + d[k][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                    nxt[i][j] = nxt[i][k];
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (d[i][j] == INF) cout << "0 ";
            else cout << d[i][j] << ' ';
        }
        cout << '\n';
    }

    // 경로 복원
    for (int i = 1 ; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (d[i][j] == 0 || d[i][j] == INF) {
                cout << "0\n";
                continue;
            }
            vector<int> path;
            // 시작 i , 도착 j , 중간 지점들을 path에 넣기
            int st = i;
            while (st != j) {
                path.push_back(st);
                st = nxt[st][j];
            }
            path.push_back(j);
            cout << path.size() << ' ';
            for (auto x : path) cout << x << ' ';
            cout << '\n';
        }
    }
}