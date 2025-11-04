#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // If the number is already divisible by 3, Vova wins on the first move
        if (n % 3 == 0) {
            cout << "Second" << endl;
        } 
        else {
            cout<<"First"<<endl;
        }
    }

    return 0;
}
