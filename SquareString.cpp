#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void solve(){
    string s;
        cin >> s;
        int n = s.length();
        bool ok = true;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] != s[i + n / 2])
                    ok = false;
                
            }
        }
        else
        {
            ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}