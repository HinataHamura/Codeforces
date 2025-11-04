#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int res = 2023;
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        bool isPossible = true;
        for (int i = 0; i < n; i++) {
            if (res % b[i] != 0) {
                isPossible = false;
                break;
            }
            res /= b[i];
        }

        if (isPossible) {
            cout << "YES" << endl;
            for (int i = 0; i < k; i++) {
                cout << (i == 0 ? res : 1) << (i == k - 1 ? "\n" : " ");
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
