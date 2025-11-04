#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void solve_test_case()
{
    int n;
    cin >> n;

    int lower_bound = INT_MIN;
    int upper_bound = INT_MAX;
    int invalid_count = 0,tc=0;

    pair<int, int> constraints[n];

    for (int i = 0; i < n; ++i)
    {
        int a, x;
        cin >> a >> x;
        constraints[i] = {a, x};

        if (a == 1)
        {
            lower_bound = max(lower_bound, x);
        }
        else if (a == 2)
        {
            upper_bound = min(upper_bound, x);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        int a = constraints[i].first;
        int x = constraints[i].second;
        if(a==3) tc++;

        if (a == 3 && (x < lower_bound || x > upper_bound))
        {
            invalid_count++;
        }
    }
    

    if (lower_bound <= upper_bound)
    {
        cout << (upper_bound - lower_bound + 1) - (tc-invalid_count) << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve_test_case();
    }

    return 0;
}
