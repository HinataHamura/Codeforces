#include <iostream>
#include <cctype> // Include the cctype header for toupper() and tolower()

using namespace std;

int main() {
    string s;
    cin >> s;
    int up = 0, lw = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') up++;
        if (s[i] >= 'a' && s[i] <= 'z') lw++;
    }

    if (up > lw) {
        for (int i = 0; i < s.size(); i++) {
            cout << (char)toupper(s[i]);
        }
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            cout << (char)tolower(s[i]);
        }
    }
    cout << endl;

    return 0;
}
