#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,k;
    cin>>n>>k;

   
    //int count=0;
    for(int i=1; i<=k; i++){

        if(n%10==0){
           n=n/10;
        }else{
            n=n-1;
        }
    }
    cout<<n;


}