#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a) * b / gcd(a, b);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (b % a == 0) {
            cout << (b) / a * b << "\n";
        } else {
            cout << lcm(a, b) << "\n";
        }
    }

    return 0;
}
