#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==0){
            if(b%2==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(b==0){
            if(a%2==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if(a%2==0 && b%2==0){
                cout<<"YES"<<endl;
            }else if(a%2==0 && b%2!=0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    
}