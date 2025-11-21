#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
 
        vector<int> freq(26,0);
        for(char c : t){
            freq[c - 'A']++;
        }
 
        int s1=s.size();
        int t1=t.size();
       
        for(int i=s1-1; i>=0; i--){
            if(freq[s[i]-'A'] > 0){
                freq[s[i]-'A']--;
            }else{
                s[i]='.';
            }
        }
 
        string c;
        for(int i=0; i<s1; i++){
            if(s[i]!='.'){
                c+=s[i];
            }
        }
        
        if(c==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}