#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        long long anna;
        long long katie;
        if(c%2!=0){
            anna=(c/2)+1+a;
        }else{
            anna=(c/2)+a;
        }
        katie=(c/2)+b;

        if(anna==katie || anna<katie){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
    
}
