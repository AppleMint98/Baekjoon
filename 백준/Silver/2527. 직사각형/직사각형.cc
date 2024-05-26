#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 4; i++) {
        int x1, y1, p1, q1, x2, y2, p2, q2;
        cin >> x1 >> y1 >> p1 >> q1 >> x2 >> y2 >> p2 >> q2;


        if (p2 < x1 || p1 < x2 || q2 < y1 || q1 < y2) cout << 'd' << '\n';
        else if ((p1 == x2 && q1 == y2) || (p2 == x1 && q2 == y1) ||
                 (x1 == p2 && y2 == q1) || (x2 == p1 && y1 == q2)) cout << 'c' << '\n';
        else if (y1 == q2 || q1 == y2) {
            if (x1 < p2 && x2 < p1) cout << 'b' << '\n';
        } else if (x1 == p2 || p1 == x2) {
            if (y1 < q2 && y2 < q1) cout << 'b' << '\n';
        } else {
            cout << 'a' << '\n';
        }
    }

}
