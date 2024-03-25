#include <bits/stdc++.h>
using namespace std;


int n, s;
int least = 0x7fffffff;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s;
    int nums[n];

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int total;
    total = nums[0];

    int right = 0;
    for(int left = 0; left < n; left++){
        while(right < n && total < s){
            right++;
            if(right != n) total += nums[right];
        }
        if(right == n) break;
        least = min(least, right - left + 1);
        total -= nums[left];
    }
    
    if(least == 0x7fffffff) least = 0;
    cout << least;
}