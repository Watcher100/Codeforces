#include<bits/stdc++.h>
using namespace std;

char upper(char s){
    return 'A' + (s - 'a');
}

int main (){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        for(int i=0; i<3; i++){
            if(islower(s[i])){
                s[i]=toupper(s[i]);
            }
        }
        // for(int i=0; i<3; i++){
        //     if(s[i]>='a' && s[i]<='z'){
        //         s[i]=upper(s[i]);
        //     }
        // }
        if(s=="YES"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}