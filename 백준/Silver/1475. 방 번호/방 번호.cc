# include <bits/stdc++.h>

using namespace std;

int freq[10];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for (int i =0; i< s.size(); i++){
        freq[s[i] - '0']++;
    }

    int num = 0;
    for (int i = 0; i < 10; i++) {
        if (i!=9 && i != 6) {
            num = max(num, freq[i]);
        }
    }
    cout << max(num, (freq[6] + freq[9] + 1) / 2);
}
