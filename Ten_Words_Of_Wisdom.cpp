#include<iostream>
using namespace std;
int main(){
    int t;
    int wnr=-1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[50],b[50];
        
        int max=0;
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
            if(a[i]<=10 && b[i]>max){
                max=b[i];
                wnr=i;
            }
        }
      cout<<wnr+1<<endl; //esha
    }
}