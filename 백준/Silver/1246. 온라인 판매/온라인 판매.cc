#include <bits/stdc++.h>
using namespace std;

int n, m;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    vector<int> prices(m);
    for (int i = 0; i < m; i++) {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());

    int price = 0, totalAmount = 0;
    for (int i = 0; i < prices.size(); i++) {

        int tmp;

        if (n > (prices.size() - i)) {
            tmp = (prices.size() - i) * prices[i];
        } else {
            tmp = n * prices[i];
        }

        if (totalAmount >= tmp) continue;
        else {
            totalAmount = tmp;
            price = prices[i];
        }
    }

    cout << price << ' ' << totalAmount;
}

