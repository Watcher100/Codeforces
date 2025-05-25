#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        double c=n/3.0;
        int c2=n/3;
        if(c>c2+.5){
            cout<<c2<<" "<<c2+1<<endl;
        }else if(n%3==0){
            cout<<c2<<" "<<c2<<endl;
        }else if(c<c2+.5){
            cout<<c2+1<<" "<<c2<<endl;
        }
        
    }
}