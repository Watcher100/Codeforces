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
       int i=1,c=1,j=0;
       while(i<n){
        if(arr[i]-1>arr[j]){
            c++;
            j=i;
        }
        i++;
       }
       cout<<c<<endl;
       
       
    }
}