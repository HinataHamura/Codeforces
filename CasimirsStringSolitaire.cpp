#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
    cin >> s;
    
    if (2 * count(s.begin(), s.end(), 'B') == s.length()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    }
    
    return 0;
}
