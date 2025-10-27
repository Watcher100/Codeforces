#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count1=1,count2=1,maxc=1;
        for(int i=0; i<n; i++){
            if(s[i]=='<' && s[i+1]=='<'){
                count1++;
                count2=1;
                if(maxc<(max(count1,count2))){
                    maxc=max(count1,count2);
                }
            }else if(s[i]=='>' && s[i+1]=='>'){
                count2++;
                count1=1;
                if(maxc<(max(count1,count2))){
                    maxc=max(count1,count2);
                }
            }else{
                count2=1;
                count1=1;
            }   
        }
        cout<<maxc+1<<endl;
      
    }
}