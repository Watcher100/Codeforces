#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr2[i]=abs(arr[i]);
    }
    long long mini=arr2[0];
    for(int i=0; i<n-1; i++){
        if(mini>arr2[i+1]){
            mini=arr2[i+1];
        } 
    }
    cout<<mini<<endl;
    
}