#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<int> arr2=arr;
        sort(arr.begin(),arr.end());
        
        int sum=arr[0]+arr[n-1];
        vector<int> finalarr;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if((arr2[i]+arr2[j])==sum){
                    finalarr.push_back(arr2[j]);
                    break;
                }
            }
        }

        for(int i=0; i<n; i++){
            cout<<finalarr[i]<<" ";
        }
        cout<<endl;
        
    }
  
}