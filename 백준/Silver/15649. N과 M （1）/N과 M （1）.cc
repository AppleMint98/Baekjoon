# include <bits/stdc++.h>
using namespace std;


/*
 * 백 트래킹
 *  : 현재 상태에서 가능한 모든 후보군을 따라 들어가며 탐색하는 알고리즘
 *  ex ) 게임 선택지 고르기
 */

int n, m;
int arr[10];
bool isUsed[10];

void func(int k){
    if (k == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!isUsed[i]) {
            arr[k] = i;
            isUsed[i] = 1;
            func(k + 1);
            isUsed[i] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    func(0);
}