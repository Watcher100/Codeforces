#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    int e=0,o=0,c=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            e++;
        }else{
            o++;
        }
    }
    if(n%2==0 && e!=o){
        cout<<"-1"<<endl;
    }else if(n%2!=0 && (n/2)+1!=e){
        cout<<"-1"<<endl;
    }else{
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(arr[i]%2!=0){
                c++;
            }
        }else{
            if(arr[i]%2==0){
                c++;
            }
        }
    }
    cout<<c/2<<endl;
    }

    
    
  }
}