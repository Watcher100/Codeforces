#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
  
    while(t--){
        string arr;
        cin>>arr;
        if((arr[0]+arr[1]+arr[2]) == (arr[3]+arr[4]+arr[5])){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}