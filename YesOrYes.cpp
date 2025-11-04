#include <iostream>
#include <cctype> // Include the cctype library for std::tolower
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
   

    while (t--) {
         string s;
    cin >> s;

    for (char &c : s) {
        c = tolower(c); 
    }
        if (s == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
