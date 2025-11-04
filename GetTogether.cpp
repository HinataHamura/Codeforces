#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

const double EPS = 1e-9;

bool canGather(double time, const vector<pair<int, int>>& people) {
    double leftmost = -1e18;
    double rightmost = 1e18;

    for (const auto& p : people) {
        double left = p.first - time * p.second;
        double right = p.first + time * p.second;

        leftmost = max(leftmost, left);
        rightmost = min(rightmost, right);
    }

    return leftmost <= rightmost;
}

double findMinimumTime(const vector<pair<int, int>>& people) {
    double left = 0.0;
    double right = 1e9;

    for (int i = 0; i < 100; ++i) {
        double mid = (left + right) / 2.0;

        if (canGather(mid, people)) {
            right = mid;
        } else {
            left = mid;
        }
    }

    return left;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> people(n);
    for (int i = 0; i < n; ++i) {
        cin >> people[i].first >> people[i].second;
    }

    double minimumTime = findMinimumTime(people);
    cout << fixed << setprecision(9) << minimumTime << endl;

    return 0;
}
