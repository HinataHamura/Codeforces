#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
         int moves = 0;
        int p[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            if (p[i] == i) 
                moves++;
        }
         cout << (moves+1)/2 << endl;
        }
       
    return 0;
    }
