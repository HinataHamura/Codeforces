#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void minimumPenalty()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int a = INT_MAX;
    int b = INT_MAX;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a > b)
            swap(a, b);
        if (v[i]<= a)
        {
            a = v[i];
            
        }
        else if (v[i] <= b)
        {
            b = v[i];
        }
        else{
            a = v[i];
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        minimumPenalty();
    }

    return 0;
}
