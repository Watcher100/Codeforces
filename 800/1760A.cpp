#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }

        for(int i=0; i<3-1; i++){
            for(int j=0; j<3-1-i; j++){
                if(arr[j]>arr[j+1]){

                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        cout<<arr[1]<<endl;
    }
  
}