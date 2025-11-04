#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string newString = "";
        int i;
        int n = s.size();
        for (i = 0; i < n; i += 2) {
            newString += s[i];
        }
        
        cout << newString+s[n-1] << endl;
    }

    return 0;
}
