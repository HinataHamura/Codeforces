#include <iostream>
using namespace std;

char findMissingLetter(char square[3][3]) {
    int countA = 0, countB = 0, countC = 0, countQ = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (square[i][j] == 'A') countA++;
            else if (square[i][j] == 'B') countB++;
            else if (square[i][j] == 'C') countC++;
            else countQ++;
        }
    }
    if (countA == 2) return 'A';
    if (countB == 2) return 'B';
    if (countC == 2) return 'C';

   
    return '?';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        char square[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> square[i][j];
            }
        }
        cout << findMissingLetter(square) << endl;
    }
    return 0;
}
