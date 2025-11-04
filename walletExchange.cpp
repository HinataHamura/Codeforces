#include <iostream>
using namespace std;

string findWinner(long long a, long long b) {
    // If both are odd or both are even, Bob wins
    if ((a + b) % 2 == 0) {
        return "Bob";
    }
    // Otherwise, Alice wins
    return "Alice";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        string winner = findWinner(a, b);
        cout << winner << "\n";
    }

    return 0;
}
