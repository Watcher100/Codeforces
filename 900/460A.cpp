#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    int c=a;
    while(a>=b){
        a=(a-b)+1;
        c++;                                                                                                                         
    }
    cout<<c<<endl;
    
        
}