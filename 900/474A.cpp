#include<bits/stdc++.h>
using namespace std;
int main (){
    string a ="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c;
    string s,s2;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<a.size(); j++){
            if(s[i]==a[j]){
                if(c=='R'){
                    s2.push_back(a[j-1]);
                }else{
                    s2.push_back(a[j+1]);
                }
            }
        }
    }
    cout<<s2<<endl;
    
        
}