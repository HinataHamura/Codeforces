#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int difficulties[n];
        for (int i = 0; i < n; i++) {
            cin >> difficulties[i];
        }

      
        bubbleSort(difficulties, n);

      
      
        int minProblemsToRemove = 0;
        for (int i = 1; i < n; i++) {
            int diff = difficulties[i] - difficulties[i - 1];
            if (diff > k) {
                minProblemsToRemove += (diff - k);
                difficulties[i] -= (diff - k);
            }
        }

        cout << minProblemsToRemove << endl;
    }

    return 0;
}
