#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans += (s[i - 1] == s[i]);
    }
    
    cout << ans << "\n";
    
    return 0;
}