#include <bits/stdc++.h>
using namespace std;

bool isP(int x){
  if(x==0||x==1)return false;
  for(int i=2;i*i<=x;i++){
    if(x%i==0)return false;
  }
  return true;
}  

int main() {
    int n,murgi,cnt=0;
    cin>>n;
    while(n--){
        cin>>murgi;
        if(isP(murgi)){
            cnt++;
        }
        
    }
    cout<<cnt<<endl;

}