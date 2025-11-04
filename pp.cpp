#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        
        if ((y - x) < n) {
            cout << "-1" << endl;
            continue;
        }
        
        int diff = (y - x) / (n - 1);
        vector<int> a(n);
        a[0] = x;
        
        for (int i = 1; i < n; ++i) {
            a[i] = a[i - 1] + diff;
        }
        
        // Adjust elements to satisfy the strictly decreasing requirement
        for (int i = n - 2; i > 0; --i) {
            if (a[i] + diff >= y) {
                a[i] = y - 1;
                diff = (y - a[0]) / i;
            }
        }
        
        for (int i = 0; i < n; ++i) {
            if(i==n-1) a[n-1]=y;
                      cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
