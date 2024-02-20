# include <bits/stdc++.h>
using namespace std;


void func(int a, int b, int n) { // a, b : 기둥 번호 , n : 원판 갯수
    // base condition : n = 1
    if (n == 1) {
        cout << a << ' ' << b << '\n';
        return;
    }
    // recursion
    // n-1 개를 기둥 a에서 6-a-b로 옮기기 -> (1+2+3 = 6 이므로 a,b를 제외한 나머지 기둥으로 옮기는 것)
    func(a, 6 - a - b, n - 1);
    // n번 원판을 a -> b 옮기기
    cout << a << ' ' << b << '\n';
    // n-1 개의 원판을 6-a-b에서 b로 옮기기
    func(6 - a - b, b, n - 1);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    cout << (1 << k) - 1 << '\n'; // 비트 연산자 : (1<<k) 는 2^k
    func(1, 3, k);
}