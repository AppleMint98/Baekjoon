#include <bits/stdc++.h>
using namespace std;

/**
 * 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
 * 오름차순
 * 1 <= m <= n <= 8
 */

int n, m;
int arr[10];
bool isUsed[10];

void func(int k){
    if (m == k) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }

    for (int i = 1; i <= n; i++) {
        if (!isUsed[i] and (arr[k - 1] <= i)) {
            arr[k] = i;
            isUsed[i] = true;
            func(k + 1);
            isUsed[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    func(0);
}