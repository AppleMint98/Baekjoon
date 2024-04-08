#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> adj[1001];
    bool vis[1001];

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int num = 0;
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        num++;
        queue<int> q;
        q.push(i);
        vis[i] = true;
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (auto nxt : adj[cur]) {
                if (vis[nxt]) continue;
                q.push(nxt);
                vis[nxt] = true;
            }
        }
    }
    cout << num;
}