#include <bits/stdc++.h>
using namespace std;

int dist[100002];
int n, k;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    fill(dist, dist + 100002, -1);

    queue<int> Q;
    Q.push(n);
    dist[n] = 0;

    while (dist[k] == -1) {
        auto cur = Q.front();
        Q.pop();
        int nxt[3] = {cur - 1, cur + 1, cur * 2};
        for (int i: nxt) {
            if (i < 0 || i > 100000) continue;
            if (dist[i] >= 0) continue;
            dist[i] = dist[cur] + 1;
            Q.push(i);
        }
    }

    cout << dist[k];
}