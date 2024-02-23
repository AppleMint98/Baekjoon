# include <bits/stdc++.h>
using namespace std;

/*
 * 대각선 파악 방법
 * x + y 값이 같으면 같은 대각선!
 * x - y 값이 같으면 같은 대각선!
 */
bool isUsed1[40]; // y값
bool isUsed2[40]; // x + y 값
bool isUsed3[40]; // x - y + n - 1 값 -> 인덱스 양수화


/*
 * isUsed 사용 이유?
 * O(1)으로 가능상태여부를 판별하기 위해서
 */
int cnt = 0;
int n;

void func(int cur) {
    if (cur == n) {
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (isUsed1[i] || isUsed2[i + cur] || isUsed3[cur - i + n - 1]) {
            continue;
        }
        isUsed1[i] = true;
        isUsed2[i+cur] = true;
        isUsed3[cur-i+n-1] = true;
        func(cur+1);
        isUsed1[i] = false;
        isUsed2[i+cur] = false;
        isUsed3[cur-i+n-1] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    func(0);
    cout << cnt;
}