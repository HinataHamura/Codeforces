#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    array<int, 26> cnt{};
    int dist = 0;
    int ans = 0;
    for (auto c : s) {
        dist += cnt[c - 'a']++ == 0;
        ans += dist;
    }
    cout << ans << "\n";
    }
    
    return 0;
}