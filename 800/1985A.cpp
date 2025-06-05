#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;

        string s3=s1;

        s1[0]=s2[0];
        s2[0]=s3[0];
        cout<<s1<<" "<<s2<<endl;
    }

}