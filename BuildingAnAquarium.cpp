#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    long long x;
    cin >> n >> x;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long lo = 0, hi = 2'000'000'007;
    while (lo < hi)
    {
        long long mid = lo + (hi - lo + 1) / 2;
        long long tot = 0;
        for (int i = 0; i < n; i++)
        {
            tot += max(mid - a[i], 0LL);
        }
        if (tot <= x)
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << lo << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}