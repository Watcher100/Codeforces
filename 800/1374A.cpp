#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int v=c-(c-b)%a;
        cout<<v<<endl;

        // long long i=c;
        // while(true){
        //     if(i%a==b){
        //         cout<<i<<endl;
        //         break;
        //     }
        //     i--;
        // }
    }
    
}