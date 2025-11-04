#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    
    for(int i = 0; i < n; ++i){
        cin >> s[i];
    }

    vector<int> cnt(26, 0); // Initializing vector cnt with size 26, all set to 0
    
    for(int i = 0; i < n; ++i){
        for(char c : s[i]){
            if(isupper(c)) {
                cnt[c - 'A']++; // Increment count for uppercase letters
            }
            else if (islower(c)){
                cnt[c - 'a']++; // Increment count for lowercase letters
            } 
        }
    }
    
    for(int i: cnt){
        if(i == 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
