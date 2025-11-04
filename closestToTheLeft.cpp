#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        int l = -1;
        int r = n;
        while(r > l+1){
            int m = (l+r)/2;
            if(x >= a[m]) l=m;
            else r=m;
        }
        cout<<l+1<<endl;
    }
    return 0;
}