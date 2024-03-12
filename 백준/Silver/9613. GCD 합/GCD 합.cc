#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        long long sum = 0;

        int n;
        cin >> n;
        int nums[n];
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
        }

        for (int j = 0; j < n; j++) {
            for (int l = j + 1; l < n; l++) {
                sum += gcd(nums[j], nums[l]);
            }
        }
        cout << sum << '\n';
    }
}
