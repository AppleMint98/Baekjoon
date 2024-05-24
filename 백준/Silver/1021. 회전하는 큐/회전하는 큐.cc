#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<int> D;
    int n, m;
    int left, right;
    int cnt = 0;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        D.push_back(i);
    }


    while(m--){
        int num;
        cin >> num;

        for (int i = 0; i < D.size(); i++) {
            if (D[i] == num) {
                left = i;
                right = D.size() - i;
                break;
            }
        }
        
        if (left <= right) {
            
            while (true) {
                if (D.front() == num) break;

                D.push_back(D.front());
                D.pop_front();
                cnt++;
            }
            D.pop_front();
            
        } else {
            
            cnt++;
            while (true) {
                if (D.back() == num) break;

                D.push_front(D.back());
                D.pop_back();
                cnt++;
            }
            D.pop_back();
        }

    }

    cout << cnt;

    return 0;
}