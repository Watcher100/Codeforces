#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,f;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<n-1; i++){
            if(arr[i]!=arr[i+1]){
                c++;
                f=i;
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }else if(c==1){
            if(n%2==0){
                if(n/2==f+1){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                if((n/2)+1==f+1 || (n/2)+1==n-(f+1)){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}