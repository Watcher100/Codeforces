#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;

    while(t--){
        int c=0,d=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        if(n>2){
            for(int i=0; i<n; i++){
                if(arr[i]==1){
                    c++;
                }
            }
        }

        if(n>2){
           for(int i=0; i<n-1; i++){
                if(arr[i]==0 && arr[i+1]==0){
                    //cout<<"yes"<<endl;
                    d++;
                    break;
                }
                
            } 
        }
        if(n>2){
            if(d==1){
               cout<<"yes"<<endl; 
            }else if(c==n){
                    cout<<"yes"<<endl;
                }else{
                    cout<<"no"<<endl;
                }
        }else{
            if(arr[0]==arr[1]){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }

    }
        
    
}