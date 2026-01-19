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
        int c=0;
        for(int i=0; i<n; i++){
            if(arr[i]==2){
                c++;
            }
        }
        if(c==0){
            cout<<1<<endl;
        }else{
            if(c%2==0){
                int d,c1=0;
                for(int i=0; i<n; i++){
                    if(arr[i]==2){
                        c1++;
                        if(c1==(c/2)){
                            d=i;
                            break;
                        }
                    }
                }
                cout<<d+1<<endl;
            }else{
               cout<<-1<<endl; 
            }
        }
        
        
    }
}