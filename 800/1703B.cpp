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

        sort(s.begin(),s.end());  //ascending order
        //sort(s.rbegin(), s.rend()); //descending order
        int c=1;
        for(int i=0; i<n-1; i++){
            if(s[i]!=s[i+1]){
                c++;
            }
        }
        cout<<(n-c)+(c*2)<<endl;
   
    }
    
}