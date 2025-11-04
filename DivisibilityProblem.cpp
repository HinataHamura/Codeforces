#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // if (a % b == 0) {
        //     cout << "0" << endl;
        // } else {
        //     int steps = b - (a % b); // Calculate the remainder to reach the next multiple of 'b'
        //     cout << steps << endl;
        // }
        cout<<(b-a%b)%b<<endl;
    }
    return 0;
}
