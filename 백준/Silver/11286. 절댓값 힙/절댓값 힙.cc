#include <bits/stdc++.h>
using namespace std;

/*
 * 비교함수의 두 인자로 같은 값이 들어가면 반드시 false 반환!
 * 절댓값이 다르다면, 앞에 있는 수가 뒤보다 크다면 true
 * 절댓값이 같다면, 두수가 다르고 앞이 양수, 뒤가 음수일 때에만 true 반환
 */
class cmp {
public:
    bool operator()(int a, int b) {
        if (abs(a) != abs(b)) return abs(a) > abs(b);
        return a > 0 && b < 0;
    }
};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    priority_queue<int, vector<int>, cmp> pq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 0) {
            if (pq.empty()) {
                cout << 0 << '\n';
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        } else pq.push(x);
    }
}