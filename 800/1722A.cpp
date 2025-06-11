#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    string a="Timur";
    while(t--){
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        if(n==5){
            for(int i=0; i<n; i++){
                int d=0;
                for(int j=0; j<n; j++){
                    if(a[i]==s[j]){
                        count++;
                        break;
                    }
                }
            }
            if(count==5 ){
                cout<<"YES"<<endl;
            }else{
            cout<<"NO"<<endl;
        }
            
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}