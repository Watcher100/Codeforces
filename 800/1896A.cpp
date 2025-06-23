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
        sort(arr2.begin(),arr2.end());

        if(arr2[0]==arr[0]){
            sort(arr.begin(),arr.end());
        }

        if(arr2==arr){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        
    }
}