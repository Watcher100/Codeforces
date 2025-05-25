#include<bits/stdc++.h>
using namespace std;

int main (){

    int k,n,w;
    cin>>k>>n>>w;

    int count=0;

    for(int i=1; i<=w; i++){
        count+=k*i;
    
    }

    if(count>n){
        cout<<count-n<<endl;
    }else{
        cout<<"0"<<endl;
    }
  


}