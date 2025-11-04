#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ans = 0;
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                t++;
            }
            else
                t = 0;
            ans = max(ans, t);
        }
        cout << ans << "\n";
    }

    return 0;
}