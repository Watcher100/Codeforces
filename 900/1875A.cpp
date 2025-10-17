#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int arr[n];
        long long c=b;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            c=c+min(arr[i],a-1);
        }
        cout<<c<<endl;
    }
    
}