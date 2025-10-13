#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int count=0,c2=0;
        for(int i=0; i<n-1; i++){
            if(a[i]!=a[i+1]){
                count=i+1;
                break;
            }
        }
        if(count>0){
            cout<<count<<" "<<n-count<<endl;;
            for(int i=0; i<count; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=count; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}