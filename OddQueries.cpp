#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t, n, q, a[200005],pref[200005];
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        pref[1] = a[1];
        for (int i = 2; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i];
        }
        for (int i = 0; i < q; i++)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long ans = pref[n] - (pref[r] - pref[l - 1]) + k * (r - l + 1);
            if (ans % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}