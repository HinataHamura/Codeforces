#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                if (s[i] == '0')
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
        }

        int ans = max(a, b);
        cout << ans << "\n";
    }

    return 0;
}
