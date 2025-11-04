#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

bool isVowel(char c) {
    return c == 'a' || c == 'e';
}

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    vector<string> t;
    for (int i = n - 1; i >= 0; ) {
        if (isVowel(s[i])) {
            t.push_back(s.substr(i - 1, 2));
            i -= 2;
        } else {
            t.push_back(s.substr(i - 2, 3));
            i -= 3;
        }
    }
    reverse(t.begin(), t.end());
    for (int i = 0; i < t.size(); i++) {
        cout << t[i] << ".\n"[i == t.size() - 1];
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}