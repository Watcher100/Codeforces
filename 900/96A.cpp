#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;

    int c_zero=0,max_zero=0,c_one=0,max_one=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            c_one=0;
            c_zero++;
            max_zero=max(max_zero,c_zero);
        }else{
            c_one++;
            max_one=max(max_one,c_one);
            c_zero=0;
        }
    }

    if(max_zero>6 || max_one>6){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}