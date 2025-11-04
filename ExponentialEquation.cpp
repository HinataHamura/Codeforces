#include <bits/stdc++.h>
using namespace std;
using i64 = long long;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
    cin >> n;
    
    if (n % 2 == 1) cout << -1 << "\n";
    else cout << 1 << " " << n / 2 << "\n";
    }
    
    return 0;
}
