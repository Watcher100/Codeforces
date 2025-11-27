#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        int onec=0,zeroc=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == 0){
                zeroc++;
            }else if(arr[i] == 1){
                onec++;
            }
        }
        long long count = pow(2,zeroc);
        if(onec > 0){
            cout<<onec*count<<endl;
        }else{
            cout<<0<<endl;
        }

    }
}
