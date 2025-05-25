#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,x,y,arr[200];
    cin>>n;

    cin>>x;
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }

    cin>>y;
    for(int i=x; i<(x+y); i++){
        cin>>arr[i];
    }

    sort(arr,arr+(x+y));//sort function for array.
    int count = 0;
    for(int i=0; i<(x+y); i++){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    if(count==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }



}