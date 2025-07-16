#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int i=0; i<a; i++){
            cin>>arr[i];
        }
        sort(arr,arr+a);

        int bale=0,maxbale=0;
        for(int i=0; i<a-1; i++){
            if(arr[i+1]<=arr[i]+b){
                bale++;
                maxbale=max(maxbale,bale);
            }else{
                bale=0;
            }
        }
        cout<<(a-maxbale)-1<<endl;
    }
    
    
        
}