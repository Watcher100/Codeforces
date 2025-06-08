#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    int v;
    for(int j=a+1; j<=b; j++){
        int c=0;
        for(int i=1; i<=j; i++){
            if(j%i==0){
            c++;
            }
        }
        if(c==2){
            v=j;
            break;
        }
    }
    if(v==b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}