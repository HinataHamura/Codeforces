#include <iostream>
#include <string>
using namespace std;

int minimumPenalty(string s) {
    int plusCount = 0, minusCount = 0;
    for (char c : s) {
        if (c == '+') {
            plusCount++;
        } else {
            minusCount++;
        }
    }
    return abs(plusCount - minusCount);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int result = minimumPenalty(s);
        cout << result << "\n";
    }

    return 0;
}
