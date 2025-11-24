#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
        long long rem = n%4;
        long long cal=n-rem;
        for(long long i=cal+1; i<=n; i++){
            if(x%2==0){
                x-=i;
            }else{
                x+=i;
            }
        }

        cout<<x<<endl;
    }
}