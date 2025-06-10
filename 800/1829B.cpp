#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int c_zero=0,maxzero=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                c_zero++;
                maxzero=max(maxzero,c_zero);
            }else{
                c_zero=0;
            }
        }
        cout<<maxzero<<endl;
    }
    
}