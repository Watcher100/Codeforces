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

        sort(arr,arr+n);//sorts the array in ascending order.
        
    int c=0;
    for(int i=0; i<n; i++){
        if((arr[i]+arr[n-1])%2==0){
                c=i;
                break;
            }
    }
    int d=0;
    for(int i=n-1; i>=0; i--){
        if((arr[i]+arr[0])%2==0){
                d=n-1-i;
                break;
            }
    }
    if(c>d){
        cout<<d<<endl;
    }else {
        cout<<c<<endl;
    }
     

    }
}