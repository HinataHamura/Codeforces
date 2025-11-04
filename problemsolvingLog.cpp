#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        string s;
        int count = 0;
        cin >> s;
        vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
        vector<int> vcount(26, 0);
        int a;
        for (int i = 0; i < n; i++)
        {
            a = int(s[i]) - 65;
            vcount[a]++;
            if (vcount[a] == v[a])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}