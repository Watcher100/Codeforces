#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        vector<int> newarr=arr;

        sort(arr.begin(),arr.end());
        
        int smallest = arr[1] - arr[0];

        for(int i=1; i<n; i++){
            int diff = arr[i] - arr[i-1];

            if(diff < smallest){
                smallest = diff;
            }
        }
        if(arr!=newarr){
            cout<<0<<endl;
        }else{
            cout<<(smallest/2)+1<<endl;
        }

        

    }
    
}
