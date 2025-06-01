#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int i=1;
        int c1= min(b,d);
        int c2= min(a,c);
        if(c1<c2){
            cout<<"Gellyfish"<<endl;
        }else if(c1==c2){
            cout<<"Gellyfish"<<endl;
        }else{
            cout<<"Flower"<<endl;
        }
        
    }
}