#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    array<int, 26> cnt{};
    int dist = 0;
    for (auto c : s) {
        dist += cnt[c - 'a']++ == 0;  
    }
    if(dist%2) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}