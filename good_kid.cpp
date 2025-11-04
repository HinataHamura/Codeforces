#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
       int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
       cin >> arr[i];
    }

    int min = 10; 
    int minIndex = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }
   arr[minIndex]=min+1;
   int pro=1;
   for(int i=0;i<n;i++){
    pro=pro*arr[i];
   }
   cout<<pro<<endl;
   
    

    
    }
}