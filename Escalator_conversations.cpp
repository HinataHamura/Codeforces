#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        int h[50];
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= m; j++) {
                int height_diff = abs(H - h[i]) - j * k;
                if (height_diff == 0) {
                    count++;
                    break;
                }
            }
        }

      cout << count << endl;
    }

    return 0;
}
