#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans[n + 1] = {0};
    int p;
    cin >> p;
    int a[p];
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
        ans[a[i]]++;
    }
    int q;
    cin >> q;
    int b[q];
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
        ans[b[i]]++;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (ans[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";

    return 0;
}