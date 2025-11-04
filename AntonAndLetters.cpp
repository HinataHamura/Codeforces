#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int distinctLetters[26] = {0}; 
    for (int i = 0; s[i] != '\0'; ++i) {
        char ch = s[i];
        if (isalpha(ch)) { 
            distinctLetters[ch - 'a']++ ; 
        }
    }

    int count = 0;
     for (int i = 0; i < 26; ++i) {
         if (distinctLetters[i] >0) {
             count++; // Count distinct letters present
        }
     }
    cout<<count<<endl;
    
    return 0;
}