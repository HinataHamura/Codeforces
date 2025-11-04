#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> c(200002, 0);

    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        c[l]++;
        c[r + 1]--;
    }

    int cnt = 0;
    for (int i = 1; i <= 200000; ++i) {
        cnt += c[i];
        c[i] = (cnt >= k);
    }

    for (int i = 1; i <= 200000; ++i) {
        c[i] += c[i - 1];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << c[b] - c[a - 1] << endl;
    }

    return 0;
}
