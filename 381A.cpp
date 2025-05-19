#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    int s=0,d=0;
    int i=0,j=t-1,k=0;
    while(k<t){
        int count = max(arr[i],arr[j]);
        if(count==arr[j]){
            j--;
        }else if(count==arr[i]){
            i++;
        }
         if(k%2==0){
            s+=count;
        }else{
            d+=count;
        }
        k++;
    }
    cout<<s<<" "<<d<<endl;
} 