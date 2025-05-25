#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    int arr[t];

    for(int i=0; i<t; i++){
        cin>>arr[i];
    }

    int count=0,count2=0;
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<t-1; i++){

        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i]; 
        }

        if(arr[i+1]>max){
            count++;
        }
        if(arr[i+1]<min){
            count2++;
        }
    }
    
    cout<<count+count2<<endl;
}