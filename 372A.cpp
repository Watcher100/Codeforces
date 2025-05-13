#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    // for(int i=0; i<3;i++){
    //     int min=i;
    //     for(int j=i+1; j<3; j++){
    //         if(arr[j] < arr[min]){
    //             min=j;
    //         }
    //     }

    //     if(min != i){
    //         int temp=arr[i];
    //         arr[i]=arr[min];
    //         arr[min]=temp;
    //     }
    // }

    for(int i=0; i<3-1; i++){
        for(int j=0; j<3-1-i; j++){
            if(arr[j] > arr[j+1]){

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int cal1=arr[1]-arr[0];
    int cal2=arr[2]-arr[1];
    cout<<cal1+cal2<<endl;
}