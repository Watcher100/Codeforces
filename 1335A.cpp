#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        if(c%2==0){
            cout<<(c/2)-1<<endl;
        }else{
            cout<<c/2<<endl;
        }
    }
}