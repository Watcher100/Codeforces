#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            c+=arr[i];
        }
        
        if(c>n){
            cout<<c-n<<endl;
        }else if(c==n){
            cout<<"0"<<endl;
        }else{
            cout<<"1"<<endl;
        }
        
    }
}