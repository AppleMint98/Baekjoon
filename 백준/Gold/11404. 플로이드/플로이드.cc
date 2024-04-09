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
    
    // 플로이드 방식에서는 테이블의 형태 자체가 인접 행렬 형식이라 인접행렬 쓰기
    // 자기 자신으로 가는 비용은 0 
    for (int i = 1; i <= n; i++) {
        // 시작 위치, 끝 위치 , val 값으로 채우기
        fill(d[i], d[i] + 1 + n, INF);
        d[i][i] = 0;
    }
    
    // 시작 도시와 도착 도시를 연결하는 노선은 하나가 아닐 수 있음
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        d[a][b] = min(d[a][b], c);
    }

    // 플로이드 알고리즘 : d[i][j] = min(d[i][j], d[i][k] + d[k][j])
    // 바로 가거나, 한 번 거쳐가거나 중에 작은값으로 계속 갱신 
    // O(N^3) 이라 정점이 1000개일 때 10억개.. 
    // 1초에 3-5억번의 연산으로 쓸 수 있나? -> 단순 사칙연산이라 가능! 해보기
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
            // if(d[i][k] + d[k][j] < d[i][j]) d[i][j] = d[i][k] + d[k][j]
            // 이렇게 해서 필요할 때만 대입이 일어나게 하는게 더 유리하긴 하다.. 
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
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

}