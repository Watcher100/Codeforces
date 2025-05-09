#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int count=0,arr[n*2];
    //int a[n],b[n];

    for(int i=0; i<n*2; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n*2; i+=2){
        for(int j=1; j<n*2; j+=2){
        if(arr[i]==arr[j]){
            count ++;
        }
        }
    }
    // for(int i=0; i<n; i++){
    //     cin>>a[i]>>b[i];
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(a[i]==b[j]){
    //             count++;
    //         }
    //     }
    // }

    cout<<count<<endl;

}