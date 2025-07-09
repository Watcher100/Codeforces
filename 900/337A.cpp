#include<bits/stdc++.h>
using namespace std;
int main (){
    int m,n;
    cin>>m>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int c=arr[n-1]-arr[0];
    for(int i=0; i<=n-m; i++){
        int d=(arr[i+m-1]-arr[i]);
        c=min(c,d);

    }
    cout<<c<<endl;
    

}