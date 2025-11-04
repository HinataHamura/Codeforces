#include <iostream>
#include <vector>
#include <cmath>
#include<bits/stdc++.h>

using namespace std;

bool isValid(const vector<int>& ropes, int k, double length) {
    int pieces = 0;
    for (int rope : ropes) {
        pieces += floor(rope / length);
    }
    return pieces >= k;
}

double findMaxLength(const vector<int>& ropes, int k) {
    double left = 0.0;
    double right = *max_element(ropes.begin(), ropes.end());

    while (right - left > 1e-6) {
        double mid = left + (right - left) / 2;

        if (isValid(ropes, k, mid)) {
            // If the current length is valid, search in the right half
            left = mid;
        } else {
            // If the current length is not valid, search in the left half
            right = mid;
        }
    }

    return left;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> ropes(n);
    for (int i = 0; i < n; ++i) {
        cin >> ropes[i];
    }

    double maxLength = findMaxLength(ropes, k);
    cout << fixed << maxLength << endl;

    return 0;
}
