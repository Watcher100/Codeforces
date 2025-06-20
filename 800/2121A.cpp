#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        int c=arr[n-1]-arr[0];
        int c1=min(abs(s-arr[0]),abs(arr[n-1]-s));
        
        cout<<c+c1<<endl;
        
    }
}