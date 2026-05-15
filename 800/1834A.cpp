#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int nagi=0,sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(arr[i]==-1){
                nagi++;
            }
        }
        if(sum>=0){
            if(nagi%2!=0){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }
        }else{
            int cal,ncal;
            if(sum%2==0){
                cal=abs(sum/2);
                ncal=abs(cal-nagi);
                
            }else{
                cal=abs(sum/2)+1;
                ncal=abs(cal-nagi);
            }
            
            if(ncal%2!=0){
                cout<<cal+1<<endl;
            }else{
                cout<<cal<<endl;
            }
        }

        

    }
    
}
