#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int n_length=0,max_length=0;
    for(int i=0; i<n-1; i++){
        if(arr[i]<=arr[i+1]){
            n_length++;
            max_length=max(n_length,max_length);
        }else{
            n_length=0;
        }
    }
    cout<<max_length+1<<endl;

}