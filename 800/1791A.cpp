#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        string s ="codeforces";
        char c;
        cin>>c;
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(c==s[i]){   
                count++;
            }
        }
        if(count>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
  
}