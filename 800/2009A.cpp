#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0"<<endl;
        }else{
            int c=a-a;
            int d=b-a;
            cout<<c+d<<endl;
        }
    }

}