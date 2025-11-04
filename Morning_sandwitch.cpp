#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int b, c, h;
        cin >> b >> c >> h;

        int min_layers = min(b, min(c, h));
        int max_layers = 2 * min_layers;
        cout << max_layers << endl;
    }

    return 0;
}
