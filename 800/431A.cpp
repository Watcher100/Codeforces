#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int e=0;
    for(int i=0; i<s.size();i++){
        if(s[i]=='1'){
            e+=a;
        }else if(s[i]=='2'){
            e+=b;
        }else if(s[i]=='3'){
            e+=c;
        }else{
            e+=d;
        }
    }
    cout<<e<<endl;
    
}