#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        long long count =0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            count^=arr[i];
        }
        if(n%2==0){
            if(count==0){
                cout<<1<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            cout<<count<<endl;
        }
    }
    
}
