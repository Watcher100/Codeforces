#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    string s,s2;
    cin>>s;

    s2.push_back(s[0]);
    s2.push_back(s[1]);
    int c2=0;
    for(int i=0;i<s.size()-2; i++){
        int c=0;
        for(int j=i+1; j<s.size()-1; j++){
            if(s[i]==s[j] && s[i+1]==s[j+1]){
                c++;
            }
        }
        if(c>c2){
            s2.push_back(s[i]);
            s2.push_back(s[i+1]);
            c2=c;
        }
            
    }
    
    cout<<s2[s2.size()-2];
    cout<<s2[s2.size()-1];
}