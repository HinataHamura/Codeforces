#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n;i++) {
        if (s[i] == 'B') {
            ans++;
            i = i + k - 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}