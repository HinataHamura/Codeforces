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

        vector<long long> arr(n);
        long long product = 1;
        int negCount = 0, zeroCount = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] < 0)
            {
                negCount++;
            }
            else if (arr[i] == 0)
            {
                zeroCount++;
            }
            product *= arr[i];
        }

        if (zeroCount > 0 || negCount % 2 == 1)
        {
            // Case where product is already minimized
            cout << "0\n";
        }
        else
        {
            // Case where product needs adjustment
            cout << "1\n";
            cout << 1 << " " << 0 << endl;
        }
    }

    return 0;
}
