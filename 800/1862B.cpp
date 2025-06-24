#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        vector<int> arr2;
        for(int i=0;i<n; i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1; i++){
            arr2.push_back(arr[i]);
            if(arr[i]>arr[i+1]){
                arr2.push_back(arr[i+1]);
            }
        }
        arr2.push_back(arr[n-1]);
        cout<<arr2.size()<<endl;
        for(int i=0; i<arr2.size(); i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
}