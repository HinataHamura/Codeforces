#include<iostream>
using namespace std;

int main(){
    string s,s1,s2,s3,sr;
    cin>>s;
    int n= s.size();
    int c1=0,c2=0,c3=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') c1++;
        if(s[i]=='2') c2++;
        if(s[i]=='3') c3++;
    }
    for(int i=0;i<c1;i++){
        s1 +="1+";
    }
    for(int i=0;i<c2;i++){
        s2 += "2+";
    }
    for(int i=0;i<c3;i++){
        s3 += "3+";
    }
    sr=s1+s2+s3;
    sr.pop_back();
    cout<<sr<<endl;
    
    return 0;
}