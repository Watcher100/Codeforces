#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int c1=0;
    for(int i=0; i<n-1; i++){
        c1+=arr[i];
    }

    cout<<endl;
    int j=n-1,c2=arr[n-1],d=0;
    while(1){
        if(c1>=c2){
            j--;
            c1-=arr[j];
            c2+=arr[j];
            d++;
        }else{
            
            break;
        }
    }
    cout<<d+1<<endl;
    
}