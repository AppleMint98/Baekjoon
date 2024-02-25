#include <bits/stdc++.h>
using namespace std;

/**
 * N가지 자연수 중에서 중복 X M개를 고른 수열
 * 1 <= m <= n <= 8
 */

int n, m;
int arr[10];
bool isUsed[10];

void func(int k, int nList[]) {

    if (k==m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!isUsed[i]) {
            arr[k] = nList[i];
            isUsed[i] = true;
            func(k + 1, nList);
            isUsed[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    int nList[n];
    for (int i = 0; i < n; i++) {
        cin >> nList[i];
    }
    sort(nList, nList + n);
    func(0, nList);
}