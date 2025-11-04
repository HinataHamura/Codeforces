#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findFirstGreaterEqual(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int findLastLessEqual(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return high;
}

int main() {
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int k;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        int l, r;
        cin >> l >> r;

        int firstIdx = findFirstGreaterEqual(arr, l);
        int lastIdx = findLastLessEqual(arr, r);

        int count = (lastIdx - firstIdx + 1 >= 0) ? lastIdx - firstIdx + 1 : 0;
        cout << count << " ";
    }

    return 0;
}
