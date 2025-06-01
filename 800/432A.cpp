#include<bits/stdc++.h>
using namespace std;
int main (){
    int t,k;
    cin>>t>>k;
    int arr[t];
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    int c=0;
    for(int i=0; i<t; i++){
        int b=5-arr[i];
        if(b>=k){
            c++;
        }
    }
    cout<<c/3<<endl;

}