#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0,mx=0;
    while(n--){
        int a,b;
        cin>>a;
        sum-=a;
        cin>>b;
        sum+=b;
        mx=max(sum,mx);

    }
    cout<<mx<<endl;
    return 0;
}