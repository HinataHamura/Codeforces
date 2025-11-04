#include <iostream>
#include <cmath>
using namespace std;

bool canBuildSquare(long long n) {
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long totalSum = 0;
        for (int i = 0; i < n; i++) {
            long long squares;
            cin >> squares;
            totalSum += squares;
        }
        if (canBuildSquare(totalSum)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
