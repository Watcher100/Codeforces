#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> arr1(n);
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        vector<long long> arr2 = arr1;
        sort(arr2.begin(),arr2.end());

        if(arr2==arr1 || k>1){
            cout<<"YES"<<endl;
        }else{
           cout<<"NO"<<endl; 
        }
    }
}