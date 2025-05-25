#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;

    int count=0,count2=0,c=0;
    for(int i=0; i<a; i++){
        count+=5;
        count2+=count;
        c++;
        if((count2+b) >= 240){
            break;
        }
    }
    
    if(count2+b>240){
        cout<<c-1<<endl;
    }else{
        cout<<c<<endl;
    }
    
}