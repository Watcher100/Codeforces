#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            cout<<"YES"<<endl;
            c++;
            break;
        }
    }
    if(c==0){
        cout<<"NO"<<endl;
    }
}