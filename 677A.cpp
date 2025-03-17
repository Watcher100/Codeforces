#include<bits/stdc++.h>
using namespace std;

int main (){

    int n,h;
    cin>>n>>h;

    int a;
    int count=0,sum=0;
    for(int i=0; i<n; i++){
        cin>>a;

        if(h>=a){
            count++;
        }else{
            sum=sum+2;
        }
    }

    cout<<count+sum<<endl;
}