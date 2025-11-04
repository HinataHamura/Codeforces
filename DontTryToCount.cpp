#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int c = 0;
        for(int i=0; i<6; i++){
            if(x.find(s) != -1){
                c = 1;
                cout << i << '\n';
                break;
            }
            x = x+x;
        }
        if(c == 0){
            cout << "-1" << '\n';
        }
    }
}
