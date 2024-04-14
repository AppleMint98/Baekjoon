#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nums[20];
    for (int i = 0; i < 20; i++) {
        nums[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;
        int tmpNums[b - a + 1];

        for (int j = 0; j <= (b - a); j++) {
            tmpNums[j] = nums[b - 1 - j];
        }

//        for (int j = 0; j < b - a + 1; j++) {
//            cout << tmpNums[j] << ' ';
//        }

        for (int j = 0; j <= b - a; j++) {
            nums[a - 1 + j] = tmpNums[j];
        }

    }

    for (int i = 0; i < 20; i++) {
        cout << nums[i] << ' ';
    }
}