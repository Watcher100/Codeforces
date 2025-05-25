#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    sort(arr,arr+t);
    int c=0;
    for(int i=0; i<t; i++){
        int d=arr[t-1]-arr[i];
        c+=d;
    }
    cout<<c<<endl;
}