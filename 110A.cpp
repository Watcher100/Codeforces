#include<bits/stdc++.h>
using namespace std;

int main (){

    long long a;
    cin>>a;
    string s = to_string(a); //int  to string conversion.

    int n=s.size();

    int count=0;
    for(int i=0; i<n; i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }

    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    

}