#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        int oddCount = 0, evenCount = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        if (n=1){
            cout<<"no"<<endl;
        }
        else if (oddCount==0 || evenCount==0 ) {
            cout << "yes" << endl;
         }
        else if(evenCount>oddCount || oddCount>evenCount){
            cout<<"Yes"<<endl;
         }
         else{
            cout<<"no"<<endl;
         }


    return 0;
}

}
