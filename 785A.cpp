#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int s1=0, s2=0, s3=0, s4=0, s5=0;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;

        if(s[0]=='T'){
            s1+=4;
        }else if(s[0]=='C'){
            s2+=6;
        }else if(s[0]=='O'){
            s3+=8;
        }
        else if(s[0]=='D'){
            s4+=12;
        }else if(s[0]=='I'){
            s5+=20;
        }
    }

    cout<<s1+s2+s3+s4+s5<<endl;
}