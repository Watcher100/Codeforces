#include<bits/stdc++.h>
using namespace std;

int main (){

    int n,a,count=0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        if(a==1){
            count++;
        }
    }
    if(count==0){
        cout<<"EASY"<<endl;
    }else{
        cout<<"HARD"<<endl;
    }
}