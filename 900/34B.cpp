#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin>>n>>m;
    
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int c=0;
    for(int i=0; i<m; i++){
        if(arr[i]>=0){
            break;
        }else{
            c+=arr[i];
        }
        
    }
    cout<<abs(c)<<endl;

}