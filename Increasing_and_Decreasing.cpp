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
        int diff = (y - x) / 2;
        vector<int> a(n);
        a[0]=x;
        for (int i = 1; i < n; ++i) {
            a[i] = a[i-1]+diff;
            diff=(y-a[i])/n-1;
        }
        for (int i = 0; i < n-1; ++i) {
            cout << a[i]<<" ";
        }
        cout<<y<<endl;
    }

    return 0;
}