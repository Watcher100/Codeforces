#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=2020){
            int a=n%2020;
            int b=n/2020;
            if(a>b){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }

    }
        
        
        
    

}