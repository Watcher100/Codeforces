#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n+1);
        arr.push_back(0);
        for(int i=1; i<n+1; i++){
            cin>>arr[i];
        }
        int maxval=0;
        for(int i=0; i<n; i++){
            int val=arr[i+1]-arr[i];
            if(val>maxval){
                maxval=val;
            }
        }
        int a=max(maxval,((x-arr[n])*2));
        cout<<a<<endl;
    }
}