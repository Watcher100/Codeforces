#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        string s,a,b;
        cin>>s;
        int n=s.size();
        if(n%2==0){
            for(int i=0,j=n/2;i<n/2; i++,j++){
                a.push_back(s[i]);
                b.push_back(s[j]);
            }
            if(a==b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        }else{
            cout<<"NO"<<endl;
        }

        
    }
    
}