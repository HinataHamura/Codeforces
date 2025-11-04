#include <iostream>
#include <cmath>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x[4], y[4];

       
        for (int i = 0; i < 4; ++i) {
            cin >> x[i] >> y[i];
        }

       
        sort(x, x + 4);
        sort(y, y + 4);

        
        int side = max(x[3] - x[0], y[3] - y[0]);
        int area = side * side;

        cout << area << endl;
    }

    return 0;
}
