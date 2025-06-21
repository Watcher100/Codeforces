#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l_dot=0,n_dot=0,c=0;
        for(int i=0; i<n; i++){
            if(s[i]=='.'){
                c++;
                n_dot++;
                int d=max(l_dot,n_dot);
                l_dot=d;
            }else{
                n_dot=0;
            }
        }
        if(l_dot>2){
            cout<<"2"<<endl;
        }else{
            cout<<c<<endl;
        }
    }
}