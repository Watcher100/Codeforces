#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s; 
        cin>>s;
        int c=0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]!=s[i+1]){
                for(int j=i+1; j<s.size(); j++){
                    if(s[i]==s[j]){
                        c++;
                        break;
                    }
                }
            
            }
        }
        if(c>0){
            cout<<"NO"<<endl;
        }else{
           cout<<"YES"<<endl; 
        }

    }
}