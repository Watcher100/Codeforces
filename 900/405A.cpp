#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    sort(arr1.begin(),arr1.end()); 
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    } 
}