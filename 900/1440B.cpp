#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll cal = n*k;
        ll arr[cal];

        for(int i=0; i<cal; i++){
            cin>>arr[i];
        }
        int medi;
        if(n%2!=0){
            medi = (n/2)+1;
        }else{
            medi = (n/2);
        }
        ll some = 0,count=0;
        for(int i=cal-(n/2)-1; i>=0; i--){
            some+=arr[i];
            count++;
            if(count==k){
                break;
            }
            i-=(n/2);
        }

        cout<<some<<endl;
    }
}