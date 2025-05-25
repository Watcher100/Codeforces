#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    int arr[100];

    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    int maxind=0,minind;
    int max = arr[0];
    for(int i=0; i<t; i++){
        if(arr[i]>max){
            max=arr[i];
            maxind=i;
        }
    }
    int min = arr[0];;
    for(int i=0; i<t; i++){
        if(arr[i]<min || arr[i]==min){
            min=arr[i];
            minind=i;
        }
    }
    int c = t-(minind+1);
    if(maxind>minind){
        cout<<(maxind+c)-1<<endl;
    }else{
        cout<<maxind+c<<endl;
    }


    
}