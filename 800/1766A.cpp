#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=0;
        while(n > 9){
            n/=10;
            ans+=9;
        }
        cout<<ans+n<<endl;
        // if(n<100){
        //     int c=n/10;
        //     if(c!=0){
        //         cout<<(n/10)+9<<endl;
        //     }else{
        //         cout<<n<<endl;
        //     } 
        // }else if(n<1000){
        //     cout<<(n/100)+18<<endl;
        // }else if(n<10000){
        //     cout<<(n/1000)+27<<endl;
        // }else if(n<100000){
        //     cout<<(n/10000)+36<<endl;
        // }else if(n<1000000){
        //     cout<<(n/100000)+45<<endl;
        // }
    }
}