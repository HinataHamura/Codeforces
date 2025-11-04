#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,cnt=0;
        cin>>x;
        for(int i=1;i<=n;i++){
            if(x%i==0) cnt++;
        }
        if(cnt==3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}