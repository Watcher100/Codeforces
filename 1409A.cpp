#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;

    if(a==b){
      cout<<"0"<<endl;
    }else{
      int diff = abs(a-b);
      if(diff%10==0){
        cout<<diff/10<<endl;
      }else{
        cout<<(diff/10)+1<<endl;
      }
    }

    
  }
}