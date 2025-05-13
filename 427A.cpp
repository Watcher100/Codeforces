#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    int police=0,crime=0;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        if(n>0){
            police+=n;
        }else{
            if(police<1){
                crime++;
            }else{
                police--;
            }
        }
    }

    cout<<crime<<endl;
}      