#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=2;
        while(1){
            int a=pow(2,i);
            if(n%(a-1)==0){
                cout<<n/(a-1)<<endl;
                break;
            }else{
                i++;
            }
        }
        
    }
        
}