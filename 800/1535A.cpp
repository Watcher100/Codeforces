#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        for(int i=0; i<4; i++){
            cin>>arr[i];
        }
        int a=max(arr[0],arr[1]);
        int b=max(arr[2],arr[3]);
        if(a>min(arr[2],arr[3]) && b>min(arr[0],arr[1])){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}