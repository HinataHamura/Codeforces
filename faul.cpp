#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int>a;
bool good(double x){
    int s=0;
    for(int i=0;i<n;i++){
        s+=floor(a[i]/x);
    }
    return s>=k;
}

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    double l=0;
    double r= 1e8;
    for(int t=0;t<100;t++){
        double m= (l+r)/2;
        if(good(m)) l=m;
        else r=m;
        cout<<t<<" "<<l<<" "<<r<<endl;
    }
    cout<<l<<endl;
    

    return 0;
}