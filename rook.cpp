#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        for (char x = 'a'; x <= 'h'; x++)
        {
            for (char y = '1'; y <= '8'; y++)
            {
                if ((x == s[0]) ^ (y == s[1]))
                {
                    cout << x << y << "\n";
                }
            }
        }
    }

    return 0;
}