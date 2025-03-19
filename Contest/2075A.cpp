#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cin>>t;

    

    for(int i=0; i<t; i++){
        long long n,k;
        cin>>n>>k;
        
        int count;
        if((n)%2==0){
            count=n/(k-1);
            cout<<count<<endl;
        }else{
            n-k;
        }
        
    }

}