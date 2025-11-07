#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int zerocount=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                zerocount++;
            }
        }

        int left=0,right=n-1;
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==0){
            right--;
        }

        int findzero=0;
        for(int i=left; i<=right; i++){
            if(arr[i]==0){
                findzero++;
                break;
            }
        }

        if(zerocount==n){
            cout<<0<<endl;
        }else if(findzero==0){
            cout<<1<<endl;
        }else if(findzero==1){
            cout<<2<<endl;
        }

    }
}