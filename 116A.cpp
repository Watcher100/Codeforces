#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,a,b;
    cin>>n;

    int pass=0,min=0;

    for(int i=0; i<n; i++){

        cin>>a>>b;
        pass=pass-a+b;

        if(pass>min){
            min=pass;
        }
    }

    cout<<min<<endl;
}