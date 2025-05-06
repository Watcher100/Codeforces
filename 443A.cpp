#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    getline(cin,s);

    int n = s.size();
    string s2;

        for(int i=0; i<n; i++){
            if(s[i]>='a' && s[i]<='z'){
                s2 += s[i];
            }
        }

    sort(s2.begin(),s2.end());
    int count=0;
    for(int i=0; i<s2.size(); i++){
        if(s2[i] != s2[i+1]){
            count++;
        }
    }

    cout<<count<<endl;
}