#include <iostream>
#include <vector>
using namespace std;

int countOperations(vector<int>& arr) {
    int operations = 0;
    while (true) {
        bool sorted = true;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < arr[i - 1]) {
                sorted = false;
                break;
            }
        }
        if (sorted) {
            break;
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = max(0, arr[i] - 1);
        }
        operations++;
    }
    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int result = countOperations(arr);
        cout << result << endl;
    }

    return 0;
}
