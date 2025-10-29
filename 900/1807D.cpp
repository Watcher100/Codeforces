#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<int> arr(n+10);
        vector<int> forward(n+10,0);
        vector<int> backward(n+10,0);
        
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        
        for(int i=1; i<=n; i++){
            forward[i]=(forward[i-1] + arr[i]);
        }
        for(int i=n; i>=1; i--){
            backward[i] = (backward[i+1]+arr[i]);
        }

        while(q--){
            long long l,r,k;
            cin>> l >> r >> k;

            long long c=(forward[l-1]+backward[r+1]);
            long long sum=((r-l)+1)*k;

            if((sum+c)%2!=0){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }
}