#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string n;
        n+=s[0];
        for(int i=1,j=1; i<s.size();i+=2,j++){
            n+=s[i];
        }
        cout<<n<<endl;
    }
}