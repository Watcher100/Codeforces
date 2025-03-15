#include<bits/stdc++.h>
using namespace std;

int main (){

    string s;
    cin>>s;

    int n=s.length();
    int count = 0,sum=0;
    for(int i=0; i<n; i++){
        if(s[i]>='A' && s[i]<='Z'){
            count++;
        }else{
            sum++;
        }
    }

    for(int i=0; i<n; i++){
        if(count<=sum){
            s[i] = tolower(s[i]);
         }else{
             s[i] = toupper(s[i]);
         }
    }
      cout<<s<<endl;
   



}