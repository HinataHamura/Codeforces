#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char max = 'a';
        for (char c : s)
        {
            if (c > max)
                max = c;
        }
        cout << static_cast<int>(max) - 96 << endl;
    }

    return 0;
}