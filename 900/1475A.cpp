#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n&(n-1)){ //n is not a power of 2
            cout<<"yes"<<endl;
        }else{    // n is a power of two
            cout<<"No"<<endl;
        }
    }
    
    

}