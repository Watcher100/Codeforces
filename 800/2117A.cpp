#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int c=0;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                i+=x-1;
                c++;
            }
        }
        
        if(c>1){
            cout<<"NO"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
}