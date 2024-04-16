#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    /*
     *  다 합쳐질 때 까지 가장 작은거 두개 뽑아서 합치기
     */

    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    int ans = 0;
    while (pq.size() > 1) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int sum = a + b;
        ans += sum;
        pq.push(sum);
    }

    cout << ans;
}