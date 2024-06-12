#include <bits/stdc++.h>
using namespace std;

int generator(int n) {
    int num = n;
    string str_n = to_string(n);
    for (char i : str_n) {
        num += i - '0';
    }
    return num;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<bool> self_num(10000, true);
    
    for (int i = 1; i < self_num.size(); i++) {
        self_num[generator(i)] = false;
    }
    for (int i = 1; i < self_num.size(); i++) {
        if (self_num[i]) cout << i << '\n';
    }
}
