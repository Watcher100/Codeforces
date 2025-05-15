#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    int arr[3];
    while(t--){
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }
        for(int i=0; i<3-1; i++){
            for(int j=0; j<3-1-i; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        if(arr[0]+arr[1] == arr[2]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}