#include<bits/stdc++.h>
using namespace std;
int main (){
    int t,c=0,v=0,d=0;
    cin>>t;
    for(int i=1; i<=t; i++){
        c+=i;
        d+=c;
        if(d>t){
            break;
        }
        v++;
    }
    cout<<v<<endl;
    
}