#include <bits/stdc++.h>
using namespace std;

/**
 * N가지 자연수 중에서 중복 X M개를 고른 수열
 * 오름차순
 * 1 <= m <= n <= 8
 */

int n, m;
int arr[10];
bool isUsed[10];

void func(int k, int nArray[]) {

    if (k==m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!isUsed[i] and arr[k-1] <= nArray[i]) {
            arr[k] = nArray[i];
            isUsed[i] = true;
            func(k + 1, nArray);
            isUsed[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    int nArray[n+1] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> nArray[i];
    }
    sort(nArray + 1, nArray + (n+1));
    func(0, nArray);
}