#include<bits/stdc++.h>
using namespace std;
int main (){

    int a,b;
    int count=0;
    cin>>a>>b;

    while(1){
        a=a*3;
        b=b*2;
        count++;
        if(a>b){
            break;
        }
        
    }

   cout<<count<<endl;

}