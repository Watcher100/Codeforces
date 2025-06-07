#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    int a=0,b=0;
    while(t--){
        int m,c;
        cin>>m>>c;
        if(m>c){
            a++;
        }else if(c>m){
            b++;
        }
    }
    if(a>b){
        cout<<"Mishka"<<endl;
    }else if(b>a){
        cout<<"Chris"<<endl;
    }else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}