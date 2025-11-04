#include<iostream>
using namespace std;
int main(){
    int n,sum=0,taxi;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+s[i];
    }
    taxi=(sum/4);
    if(sum%4==0) cout<<taxi<<endl;
    else cout<<taxi+1<<endl;

}