#include<bits/stdc++.h>
using namespace std;
int main (){
    long long n,k;
    cin>>n>>k;
    if(n%2!=0){
        long long a=n/2+1;
        if(k<=a){
            cout<<(k*2)-1<<endl;
        }else{
            cout<<(k-a)*2<<endl;
        }
    }else{
        long long a=n/2;
        if(k<=a){
            cout<<(k*2)-1<<endl;
        }else{
            cout<<(k-a)*2<<endl;
        }
    }
    
}