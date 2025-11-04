#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string word;
        for (int i = 0; i < 3; ++i) {
            if (n >= 26) {
                word += 'z';
                n -= 26;
            } else {
                word += ('a' + n - 1);
                n = 0;
            }
        }

        cout << word << endl;
    }

    return 0;
}
